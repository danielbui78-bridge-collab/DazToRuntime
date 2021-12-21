#include <QtGui/qcheckbox.h>
#include <QtGui/QMessageBox>
#include <QtNetwork/qudpsocket.h>
#include <QtNetwork/qabstractsocket.h>
#include <QUuid.h>

#include <dzapp.h>
#include <dzscene.h>
#include <dzmainwindow.h>
#include <dzshape.h>
#include <dzproperty.h>
#include <dzobject.h>
#include <dzpresentation.h>
#include <dznumericproperty.h>
#include <dzimageproperty.h>
#include <dzcolorproperty.h>
#include <dpcimages.h>
#include <dzfigure.h>
#include <dzfacetmesh.h>
#include <dzbone.h>
//#include <dznodeinstance.h>
#include "idzsceneasset.h"
#include "dzuri.h"

#include "DzUnrealDialog.h"
#include "DzUnrealAction.h"
#include "DzUnrealMorphSelectionDialog.h"

DzUnrealAction::DzUnrealAction() :
	 DzRuntimePluginAction(tr("&Daz to Unreal"), tr("Send the selected node to Unreal."))
{
	 Port = 0;
	 SubdivisionDialog = nullptr;
     NonInteractiveMode = 0;
	 AssetType = QString("SkeletalMesh");
	 //Setup Icon
	 QString iconName = "icon";
	 QPixmap basePixmap = QPixmap::fromImage(getEmbeddedImage(iconName.toLatin1()));
	 QIcon icon;
	 icon.addPixmap(basePixmap, QIcon::Normal, QIcon::Off);
	 QAction::setIcon(icon);
}

void DzUnrealAction::executeAction()
{
	 // Check if the main window has been created yet.
	 // If it hasn't, alert the user and exit early.
	 DzMainWindow* mw = dzApp->getInterface();
	 if (!mw)
	 {
         if (NonInteractiveMode == 0) 
		 {
             QMessageBox::warning(0, tr("Error"),
                 tr("The main window has not been created yet."), QMessageBox::Ok);
         }

		  return;
	 }

	 // Create and show the dialog. If the user cancels, exit early,
	 // otherwise continue on and do the thing that required modal
	 // input from the user.
    if (dzScene->getNumSelectedNodes() != 1)
    {
        if (NonInteractiveMode == 0) 
		{
            QMessageBox::warning(0, tr("Error"),
                tr("Please select one Character or Prop to send."), QMessageBox::Ok);
        }
        return;
    }

    // Create the dialog
    DzUnrealDialog* BridgeDialog = new DzUnrealDialog(mw);

	//////////////////////////////////////
	// Connect bridge dialog to exposed properties for scripting
	//////////////////////////////////////
	if (true)
	{
		// 1) dialog AssetType to get/setAssetType
		connect(BridgeDialog->assetTypeCombo, SIGNAL(static_cast<void(QComboBox::*)(const QString&)>(&QComboBox::activated)), this, SLOT(setAssetType()));
		// TODO: add "Data" field with sanitized AssetType string to comboBox
		// TODO: then, change findText to findData
		//BridgeDialog->assetTypeCombo->setCurrentIndex(BridgeDialog->assetTypeCombo->findText(AssetType));

		// 2) dialog AssetName to get/setExportFilename
		connect(BridgeDialog->assetNameEdit, SIGNAL(QLineEdit::textChanged()), this, SLOT(setExportFilename()));
		// TODO: assess whether ValidateText is needed below
		if (CharacterName != "") BridgeDialog->assetNameEdit->setText( CharacterName );

		// 3) ?? to get/setExportFolder
		// n/a: Not accessible by Bridge UI, ExportFolder is script-only for now
		// TODO: Folder name validation on ExportFolder

		// 4) dialog intermediateFolder (aka RootFolder) to get/setRootFolder
		connect(BridgeDialog->intermediateFolderEdit, SIGNAL(QLineEdit::textChanged()), this, SLOT(setRootFolder()));
		// TODO: Folder name validation on RootFolder
		if (RootFolder != "") BridgeDialog->intermediateFolderEdit->setText( RootFolder );

	}

    // If the Accept button was pressed, start the export
    int dialog_choice = -1;
	if (NonInteractiveMode == 0)
	{
		dialog_choice = BridgeDialog->exec();
	}
    if (NonInteractiveMode == 1 || dialog_choice == QDialog::Accepted)
    {
        // Collect the values from the dialog fields
        CharacterName = BridgeDialog->assetNameEdit->text();
		RootFolder = BridgeDialog->intermediateFolderEdit->text();
		if (ExportFolder == "" || NonInteractiveMode == 0) ExportFolder = CharacterName;
		DestinationPath = RootFolder + "/" + ExportFolder + "/";
        CharacterFBX = DestinationPath + CharacterName + ".fbx";
        CharacterBaseFBX = DestinationPath + CharacterName + "_base.fbx";
        CharacterHDFBX = DestinationPath + CharacterName + "_HD.fbx";

		// TODO: consider removing once findData( ) method above is completely implemented
		if (NonInteractiveMode == 0) AssetType = BridgeDialog->assetTypeCombo->currentText().replace(" ", "");

        MorphString = BridgeDialog->GetMorphString();
        Port = BridgeDialog->portEdit->text().toInt();
        ExportMorphs = BridgeDialog->morphsEnabledCheckBox->isChecked();
        ExportSubdivisions = BridgeDialog->subdivisionEnabledCheckBox->isChecked();
        MorphMapping = BridgeDialog->GetMorphMapping();
        ShowFbxDialog = BridgeDialog->showFbxDialogCheckBox->isChecked();
        ExportMaterialPropertiesCSV = BridgeDialog->exportMaterialPropertyCSVCheckBox->isChecked();
        SubdivisionDialog = DzUnrealSubdivisionDialog::Get(BridgeDialog);
        FBXVersion = BridgeDialog->fbxVersionCombo->currentText();

        if (AssetType == "SkeletalMesh" && ExportSubdivisions)
        {
            // export base mesh
            ExportBaseMesh = true;
            SubdivisionDialog->LockSubdivisionProperties(false);
            Export();
        }

        ExportBaseMesh = false;
        SubdivisionDialog->LockSubdivisionProperties(ExportSubdivisions);
        Export();
    }
}

void DzUnrealAction::WriteConfiguration()
{
	 QString DTUfilename = DestinationPath + CharacterName + ".dtu";
	 QFile DTUfile(DTUfilename);
	 DTUfile.open(QIODevice::WriteOnly);
	 DzJsonWriter writer(&DTUfile);
	 writer.startObject(true);
	 writer.addMember("Asset Name", CharacterName);
	 writer.addMember("Asset Type", AssetType);
	 writer.addMember("FBX File", CharacterFBX);
	 writer.addMember("Base FBX File", CharacterBaseFBX);
	 writer.addMember("HD FBX File", CharacterHDFBX);
	 writer.addMember("Import Folder", DestinationPath);
	 // DB Dec-21-2021: additional metadata
	 writer.addMember("Product Name", ProductName);
	 writer.addMember("Product Component Name", ProductComponentName);

	 if (AssetType != "Environment")
	 {
		 if (ExportMaterialPropertiesCSV)
		 {
			 QString filename = DestinationPath + CharacterName + "_Maps.csv";
			 QFile file(filename);
			 file.open(QIODevice::WriteOnly);
			 QTextStream stream(&file);
			 stream << "Version, Object, Material, Type, Color, Opacity, File" << endl;

			 writer.startMemberArray("Materials", true);
			 WriteMaterials(Selection, writer, stream);
			 writer.finishArray();
		 }
		 else
		 {
			 QString throwaway;
			 QTextStream stream(&throwaway);
			 writer.startMemberArray("Materials", true);
			 WriteMaterials(Selection, writer, stream);
			 writer.finishArray();
		 }



		 writer.startMemberArray("Morphs", true);
		 if (ExportMorphs)
		 {
			  for (QMap<QString, QString>::iterator i = MorphMapping.begin(); i != MorphMapping.end(); ++i)
			  {
					writer.startObject(true);
					writer.addMember("Name", i.key());
					writer.addMember("Label", i.value());
					writer.finishObject();
			  }
		 }
		 writer.finishArray();

		 if (ExportMorphs)
		 {
			 DzMainWindow* mw = dzApp->getInterface();
			 DzUnrealMorphSelectionDialog* morphDialog = DzUnrealMorphSelectionDialog::Get(mw);
			 if (morphDialog->IsAutoJCMEnabled())
			 {
				 writer.startMemberArray("JointLinks", true);
				 QList<JointLinkInfo> JointLinks = morphDialog->GetActiveJointControlledMorphs(Selection);
				 foreach(JointLinkInfo linkInfo, JointLinks)
				 {
					 writer.startObject(true);
					 writer.addMember("Bone", linkInfo.Bone);
					 writer.addMember("Axis", linkInfo.Axis);
					 writer.addMember("Morph", linkInfo.Morph);
					 writer.addMember("Scalar", linkInfo.Scalar);
					 writer.addMember("Alpha", linkInfo.Alpha);
					 if (linkInfo.Keys.count() > 0)
					 {
						 writer.startMemberArray("Keys", true);
						 foreach(JointLinkKey key, linkInfo.Keys)
						 {
							 writer.startObject(true);
							 writer.addMember("Angle", key.Angle);
							 writer.addMember("Value", key.Value);
							 writer.finishObject();
						 }
						 writer.finishArray();
					 }
					 writer.finishObject();
				 }
				 writer.finishArray();
			 }
		 }
		 
		 writer.startMemberArray("Subdivisions", true);
		 if (ExportSubdivisions)
			 SubdivisionDialog->WriteSubdivisions(writer);

		 writer.finishArray();
	 }

	 if (AssetType == "Pose")
	 {
		 writer.startMemberArray("Poses", true);

		for (QList<QString>::iterator i = PoseList.begin(); i != PoseList.end(); ++i)
		{
			writer.startObject(true);
			writer.addMember("Name", *i);
			writer.addMember("Label", MorphMapping[*i]);
			writer.finishObject();
		}

		 writer.finishArray();

	 }

	 if (AssetType == "Environment")
	 {
		 writer.startMemberArray("Instances", true);
		 QMap<QString, DzMatrix3> WritingInstances;
		 QList<DzGeometry*> ExportedGeometry;
		 WriteInstances(Selection, writer, WritingInstances, ExportedGeometry);
		 writer.finishArray();
	 }

	 writer.finishObject();

	 DTUfile.close();

	 if (AssetType != "Environment" && ExportSubdivisions)
	 {
		 QString CMD = "ImportFBXScene " + DTUfilename;
		 QByteArray array = CMD.toLocal8Bit();
		 char* cmd = array.data();
		 int res = system(cmd);
	 }

	 // Send a message to Unreal telling it to start an import
	 QUdpSocket* sendSocket = new QUdpSocket(this);
	 QHostAddress* sendAddress = new QHostAddress("127.0.0.1");

	 sendSocket->connectToHost(*sendAddress, Port);
	 sendSocket->write(DTUfilename.toUtf8());
}

// Setup custom FBX export options
void DzUnrealAction::SetExportOptions(DzFileIOSettings& ExportOptions)
{

}

// Write out all the surface properties
void DzUnrealAction::WriteMaterials(DzNode* Node, DzJsonWriter& Writer, QTextStream& Stream)
{
	 DzObject* Object = Node->getObject();
	 DzShape* Shape = Object ? Object->getCurrentShape() : NULL;

	 if (Shape)
	 {
		  for (int i = 0; i < Shape->getNumMaterials(); i++)
		  {
				DzMaterial* Material = Shape->getMaterial(i);
				if (Material)
				{
					Writer.startObject(true);
					Writer.addMember("Version", 2);
					Writer.addMember("Asset Name", Node->getLabel());
					Writer.addMember("Material Name", Material->getName());
					Writer.addMember("Material Type", Material->getMaterialName());
					DzPresentation* presentation = Node->getPresentation();
					if (presentation)
					{
						const QString presentationType = presentation->getType();
						Writer.addMember("Value", presentationType);
					}
					else
					{
						Writer.addMember("Value", QString("Unknown"));
					}

					 Writer.startMemberArray("Properties", true);
					 // Presentation node is stored as first element in Property array for compatibility with UE plugin's basematerial search algorithm
					 if (presentation)
					 {
						  const QString presentationType = presentation->getType();
						  Writer.startObject(true);
						  Writer.addMember("Name", QString("Asset Type"));
						  Writer.addMember("Value", presentationType);
						  Writer.addMember("Data Type", QString("String"));
						  Writer.addMember("Texture", QString(""));
						  Writer.finishObject();

						  if (ExportMaterialPropertiesCSV)
						  {
							  Stream << "2, " << Node->getLabel() << ", " << Material->getName() << ", " << Material->getMaterialName() << ", " << "Asset Type" << ", " << presentationType << ", " << "String" << ", " << "" << endl;
						  }
					 }

					 for (int propertyIndex = 0; propertyIndex < Material->getNumProperties(); propertyIndex++)
					 {
						  DzProperty* Property = Material->getProperty(propertyIndex);
						  DzImageProperty* ImageProperty = qobject_cast<DzImageProperty*>(Property);
						  if (ImageProperty)
						  {
								QString Name = Property->getName();
								QString TextureName = "";

								if (ImageProperty->getValue())
								{
									 TextureName = ImageProperty->getValue()->getFilename();
								}

								Writer.startObject(true);
//								Writer.addMember("Version", 2);
//								Writer.addMember("Asset Name", Node->getLabel());
//								Writer.addMember("Material Name", Material->getName());
//								Writer.addMember("Material Type", Material->getMaterialName());
								Writer.addMember("Name", Name);
								Writer.addMember("Value", Material->getDiffuseColor().name());
								Writer.addMember("Data Type", QString("Texture"));
								Writer.addMember("Texture", TextureName);
								Writer.finishObject();
								if (ExportMaterialPropertiesCSV)
								{
									Stream << "2, " << Node->getLabel() << ", " << Material->getName() << ", " << Material->getMaterialName() << ", " << Name << ", " << Material->getDiffuseColor().name() << ", " << "Texture" << ", " << TextureName << endl;
								}
								continue;
						  }

						  DzColorProperty* ColorProperty = qobject_cast<DzColorProperty*>(Property);
						  if (ColorProperty)
						  {
								QString Name = Property->getName();
								QString TextureName = "";

								if (ColorProperty->getMapValue())
								{
									 TextureName = ColorProperty->getMapValue()->getFilename();
								}

								Writer.startObject(true);
//								Writer.addMember("Version", 2);
//								Writer.addMember("Asset Name", Node->getLabel());
//								Writer.addMember("Material Name", Material->getName());
//								Writer.addMember("Material Type", Material->getMaterialName());
								Writer.addMember("Name", Name);
								Writer.addMember("Value", ColorProperty->getColorValue().name());
								Writer.addMember("Data Type", QString("Color"));
								Writer.addMember("Texture", TextureName);
								Writer.finishObject();
								if (ExportMaterialPropertiesCSV)
								{
									Stream << "2, " << Node->getLabel() << ", " << Material->getName() << ", " << Material->getMaterialName() << ", " << Name << ", " << ColorProperty->getColorValue().name() << ", " << "Color" << ", " << TextureName << endl;
								}
								continue;
						  }

						  DzNumericProperty* NumericProperty = qobject_cast<DzNumericProperty*>(Property);
						  if (NumericProperty)
						  {
								QString Name = Property->getName();
								QString TextureName = "";

								if (NumericProperty->getMapValue())
								{
									 TextureName = NumericProperty->getMapValue()->getFilename();
								}

								Writer.startObject(true);
//								Writer.addMember("Version", 2);
//								Writer.addMember("Asset Name", Node->getLabel());
//								Writer.addMember("Material Name", Material->getName());
//								Writer.addMember("Material Type", Material->getMaterialName());
								Writer.addMember("Name", Name);
								Writer.addMember("Value", NumericProperty->getDoubleValue());
								Writer.addMember("Data Type", QString("Double"));
								Writer.addMember("Texture", TextureName);
								Writer.finishObject();
								if (ExportMaterialPropertiesCSV)
								{
									Stream << "2, " << Node->getLabel() << ", " << Material->getName() << ", " << Material->getMaterialName() << ", " << Name << ", " << NumericProperty->getDoubleValue() << ", " << "Double" << ", " << TextureName << endl;
								}
						  }
					 } // for (int propertyIndex = 0;

					 Writer.finishArray();

					 Writer.finishObject();
				}
		  }
	 }

	 DzNodeListIterator Iterator = Node->nodeChildrenIterator();
	 while (Iterator.hasNext())
	 {
		  DzNode* Child = Iterator.next();
		  WriteMaterials(Child, Writer, Stream);
	 }
}

void DzUnrealAction::WriteInstances(DzNode* Node, DzJsonWriter& Writer, QMap<QString, DzMatrix3>& WritenInstances, QList<DzGeometry*>& ExportedGeometry, QUuid ParentID)
{
	DzObject* Object = Node->getObject();
	DzShape* Shape = Object ? Object->getCurrentShape() : NULL;
	DzGeometry* Geometry = Shape ? Shape->getGeometry() : NULL;
	DzBone* Bone = qobject_cast<DzBone*>(Node);

	if (Bone == nullptr && Geometry)
	{
		ExportedGeometry.append(Geometry);
		ParentID = WriteInstance(Node, Writer, ParentID);
	}

	for (int ChildIndex = 0; ChildIndex < Node->getNumNodeChildren(); ChildIndex++)
	{
		DzNode* ChildNode = Node->getNodeChild(ChildIndex);
		WriteInstances(ChildNode, Writer, WritenInstances, ExportedGeometry, ParentID);
	}
}

QUuid DzUnrealAction::WriteInstance(DzNode* Node, DzJsonWriter& Writer, QUuid ParentID)
{
	QString Path = Node->getAssetFileInfo().getUri().getFilePath();
	QFile File(Path);
	QString FileName = File.fileName();
	QStringList Items = FileName.split("/");
	QStringList Parts = Items[Items.count() - 1].split(".");
	QString Name = Parts[0].remove(QRegExp("[^A-Za-z0-9_]"));
	QUuid Uid = QUuid::createUuid();

	Writer.startObject(true);
	Writer.addMember("Version", 1);
	Writer.addMember("InstanceLabel", Node->getLabel());
	Writer.addMember("InstanceAsset", Name);
	Writer.addMember("ParentID", ParentID.toString());
	Writer.addMember("Guid", Uid.toString());
	Writer.addMember("TranslationX", Node->getWSPos().m_x);
	Writer.addMember("TranslationY", Node->getWSPos().m_y);
	Writer.addMember("TranslationZ", Node->getWSPos().m_z);

	DzQuat RotationQuat = Node->getWSRot();
	DzVec3 Rotation;
	RotationQuat.getValue(Node->getRotationOrder(), Rotation);
	Writer.addMember("RotationX", Rotation.m_x);
	Writer.addMember("RotationY", Rotation.m_y);
	Writer.addMember("RotationZ", Rotation.m_z);

	DzMatrix3 Scale = Node->getWSScale();

	Writer.addMember("ScaleX", Scale.row(0).length());
	Writer.addMember("ScaleY", Scale.row(1).length());
	Writer.addMember("ScaleZ", Scale.row(2).length());
	Writer.finishObject();

	return Uid;
}
void DzUnrealAction::setNonInteractiveMode(int mode) {
    this->NonInteractiveMode = mode;
}
int DzUnrealAction::getNonInteractiveMode() {
    return this->NonInteractiveMode;
}


#include "moc_DzUnrealAction.cpp"
