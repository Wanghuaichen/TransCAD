#include "stdafx.h"
#include "Part.h"

#include "Feature.h"
#include "FeatureSketch.h"
#include "FeatureExtrude.h"
#include "FeatureSweep.h"
#include "FeatureRevolve.h"
#include "FeatureFillet.h"
#include "FeatureChamfer.h"
#include "FeatureDatumPlaneOffset.h"
#include "FeatureDatumPlaneEquation.h"
#include "FeaturePatternRectangular.h"
#include "FeaturePatternCircular.h"
#include "FeatureHole.h"
#include "FeatureLoft.h"
#include "FeatureShell.h"
#include "FeatureDraft.h"
#include "FeatureOffset.h"
#include "FeatureBrep.h"

#include "Reference.h"
#include "ReferenceBrep.h"
#include "ReferenceExplicitModelObject.h"
#include "ReferenceFeature.h"

#include "SketchItem.h"
#include "SketchItemCircle.h"
#include "SketchItemArc.h"
#include "SketchItemLine.h"
#include "SketchItemCenterLine.h"
#include "SketchItemPolyLine.h"
#include "SketchItemRectangle.h"
#include "SketchItemFillet.h"
#include "SketchItemChamfer.h"
#include "SketchItemExtendLines.h"
#include "SketchItemPolygon.h"
#include "SketchItemTranslate.h"
#include "SketchItemRotate.h"

#include "Manipulation.h"

#include "CustomFeature.h"

Part::Part(void)
{
	SetDocsPtr(m_spApplication->GetDocuments());

	// Ȱ�� ������ �ִ� ��� ����. �ƴ� ��� ���� ����
	if (m_spApplication->GetActiveDocument())
		SetPartDocumentPtr(m_spApplication->GetActiveDocument());
	else
		SetPartDocumentPtr(GetDocsPtr()->AddPartDocument());
	
	SetPartPtr(GetPartDocumentPtr()->GetPart());			// Set TransCAD PartPtr
	SetFeaturesPtr(GetPartPtr()->GetFeatures());			// Set TransCAD FeaturesPtr
	m_initialTitle = _bstr_t(GetPartDocumentPtr()->GetTitle());		// ������ Ÿ��Ʋ ����
	
	//ReadCustomFeatures();

	System::Reset(this);
	SetCurrentSketch(NULL);
	SetCurrentReference(NULL);
	SetCurrentFeature(NULL);
}

Part::~Part(void)
{
	CMD::SetTitle(TEXT("Good bye!"), 0);
	
	// Clear features
	m_currentState = 0;
	Clear();

	System::UninitTransCAD(this);
}

// ���� Ư¡���� ��� �� ��ü Ư¡���� �̷� ����
void Part::Clear(void)
{
	// ���� Ư¡���� ��� ����
	ClearList(m_featureList);
	
	// ��ü Ư¡���� �̷� ����
	if (GetCurrentState() == 0)
		ClearList(m_allFeatureList);
}

// Ư¡���� ����, ����, ���� �� ȣ��Ǵ� �Լ�. �� ���¿��� Undo�� Redo�� üũ�ϱ� ���� Ȱ��
void Part::CheckCurrentState(void)
{
	// ���� ���� ����
	m_currentState = GetHistoryFeatureListSize() - m_undoCount + m_redoCount;
	
	// Undo, Redo�� ���� ���� �ֱٺ��� ���� ���¿��� Ư¡������ ����, ����, ������ �̷������ ��� �� ���� �̷��� ��� ����
	// ���ο� Ư¡������ ��Ͽ� �߰� �ϱ� ���� ȣ��Ǿ�� ��
	if ((m_updateCount != 0)
		&& (m_currentState < GetHistoryFeatureListSize()))
	{
		m_undoCount = 0;
		m_redoCount = 0;
		
		// Initial ���� ������ �̷��� ��� ����
		for (int i = GetHistoryFeatureListSize() - 1; i > m_currentState - 1; --i)
		{
			EraseHistoryFeature(i);
			m_updateCount--;
		}
	}

	m_updateCount++;
}


// ��� ��ɾ �����ϴ� �Լ�
void Part::RunCommands(char * command)
{
	try
	{
		TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "No command!");

		System::Renew(this); // �� �Է¸��� �ֽ� TransCAD ������ ����

		CMD::SetColor(D_BLUE, YELLOW);

		if ((fType = Commands.GetFeatureType(token)) != NoFeature)			// Ư¡������ �����ϴ� �κ�
			RunFeatureCommand(fType, command);
		else if ((rType = Commands.GetReferenceType(token)) != NoReference)	// ���۷����� ����(����)�ϴ� �κ�
			RunReferenceCommand(rType, command);
		else if ((gType = Commands.GetCommandType(token)) != NoCommand)		// ��Ÿ ��ɾ �����ϴ� �κ�
			RunGeneralCommand(gType, command);
		else if (GetCustomFeatureByName(token))								// Ŀ���� ���ĸ� �����ϴ� �κ�
			GetCustomFeatureByName(token)->Run(command);
		else if (token != "exit" && token != "����")
			cout << "Invalid command!" << endl;
	}
	catch (TSIArgumentException & e)
	{
		cout << e.GetMessageW() << endl;
	}
}

// Ư¡���� ���� ��ɾ� ����
void Part::RunFeatureCommand(FeatureType type, char * command)
{
	Feature * pFeature = 0;
	
	switch(type)
	{
		case Sketch_Type:
			pFeature = new FeatureSketch(this, 0);
			break;
		case ProExtrude_Type:
			pFeature = new FeatureExtrude(this, 1);
			break;
		case CutExtrude_Type:
			pFeature = new FeatureExtrude(this, 2);
			break;
		case Fillet_Type:
			pFeature = new FeatureFillet(this, 3);
			break;
		case ProSweep_Type:
			pFeature = new FeatureSweep(this, 4);
			break;
		case CutSweep_Type:
			pFeature = new FeatureSweep(this, 5);
			break;
		case Chamfer_Type:
			pFeature = new FeatureChamfer(this, 6);
			break;
		case ProRevolve_Type:
			pFeature = new FeatureRevolve(this, 7);
			break;
		case CutRevolve_Type:
			pFeature = new FeatureRevolve(this, 8);
			break;
		case RevolveWithAxis_Type:
			pFeature = new FeatureRevolve(this, 9);
			break;
		case DatumPlaneOffset_Type:
			pFeature = new FeatureDatumPlaneOffset(this, 10);
			break;
		case PatternRectangular_Type:
			pFeature = new FeaturePatternRectangular(this, 11);
			break;
		case PatternCircular_Type:
			pFeature = new FeaturePatternCircular(this, 12);
			break;
		case HoleCounterbored_Type:
			pFeature = new FeatureHole(this, 13);
			break;
		case HoleCountersunk_Type:
			pFeature = new FeatureHole(this, 14);
			break;
		case HoleSimple_Type:
			pFeature = new FeatureHole(this, 15);
			break;
		case Shell_Type:
			pFeature = new FeatureShell(this, 16);
			break;
		case Loft_Type:
			pFeature = new FeatureLoft(this, 17);
			break;
		case Draft_Type:
			pFeature = new FeatureDraft(this, 18);
			break;
		case Offset_Type:
			pFeature = new FeatureOffset(this, 19);
			break;
		case BrepSolid_Type:
			pFeature = new FeatureBrep(this, 20);
			break;
		case DatumPlaneEquation_Type:
			pFeature = new FeatureDatumPlaneEquation(this, 21);
			break;
	}

	if (pFeature)
	{
		try
		{
			pFeature->GetInfo(command);
			pFeature->SetOrder(GetFeatureListSize());
			SetFeature(pFeature);
			
			CheckCurrentState();

			if(!GetCurrentSketch())
				SetHistoryFeature(CopyFeature(pFeature));
		}
		catch (TSIArgumentException & e)
		{
			cout << e.GetMessageW() << endl;
			delete pFeature;
		}
	}
}

// ���۷��� ���� ��ɾ� ����. CurrentReference(s)�� ���� ��
void Part::RunReferenceCommand(ReferenceType type, char * command)
{
	Reference * pReference = 0;
	Feature * pFeature = new Feature(this, 0); // �ӽ� Ư¡����

	switch(type)
	{
		case Plane_Type:
			pReference = new ReferenceExplicitModelObject(pFeature, 0);
			break;
		case Brep_Type:
			pReference = new ReferenceBrep(pFeature, 1);
			break;
		case Breps_Type:
			pReference = new ReferenceBrep(pFeature, 2);
			break;
		case FaceByAxis_Type:
			pReference = new ReferenceBrep(pFeature, 3);
			break;
		case EdgeByPoint_Type:
			pReference = new ReferenceBrep(pFeature, 4);
			break;
		case EdgeByPoints_Type:
			pReference = new ReferenceBrep(pFeature, 5);
			break;
		case Feature_Type:
			pReference = new ReferenceFeature(pFeature, 6);
			break;
		case Features_Type:
			pReference = new ReferenceFeature(pFeature, 7);
			break;
	}

	if (pReference)
	{
		try
		{
			pReference->GetInfo(command);
		}
		catch (TSIArgumentException & e)
		{
			cout << e.GetMessageW() << endl;
		}
	}

	if (!GetCurrentReference() && !GetCurrentFeature())
	{
		delete pReference;
		delete pFeature;
	}
}

// ��Ÿ ��ɾ ����
void Part::RunGeneralCommand(GeneralType type, char * command)
{
	switch(type)
	{
		case NewPartDoc_Type:
			System::InitTransCAD(this);
			break;
		case Terminate_Type:
			System::TerminateTransCAD(this);
			break;
		case Restore_Type:
			System::RestoreSession(this);
			break;
		case Reset_Type:
			System::Reset(this);
			break;
		case Clear_Type:
			CMD::Clear();
			break;
		case Modify_Type:
			Manipulation::Modify(command, this);
			break;
		case Delete_Type:
			Manipulation::Delete(command, this);
			break;
		case Undo_Type:
			Manipulation::UndoFeature(this);
			break;
		case Redo_Type:
			Manipulation::RedoFeature(this);
			break;
		case Import_Type:
			File::Import(command, this);
			break;
		case Export_Type:
			File::Export(command, this);
			break;
		case ConvertMesh_Type:
			File::ConvertMesh(command, this);
			break;
		case Ask_Type:
			Information::Ask(command, this);
			break;
		case Parent_Type:
			Information::Parent(command, this);
			break;
		case Children_Type:
			Information::Children(command, this);
			break;
		case Highlight_Type:
			Information::Highlight(command, this);
			break;
		case Help_Type:
			Help(command);
			break;
		case CustomFeature_Type:
			CreateCustomFeature(command);
			break;
	}
}


// ����ġ�� ���� ���� ��, ����ġ ��� ����/����/���� �� ��ɾ� ����
void Part::OnCreatingSketch(char * command)
{
	token = command;
	
	// ����ġ ��ɾ� ����
	GetCurrentSketch()->RunCommands(command);
	
	try
	{
		if (token == "closesketch" || token == "����ġ����")
		{
			CMD::SetColor(D_BLUE, YELLOW);
			
			// ����ġ Closeness üũ
			GetCurrentSketch()->CheckCloseness();

			if (GetCurrentSketch()->GetCloseness() == 0)
				cout << "WARNING: " << GetCurrentSketch()->GetName() << " is neither connected nor closed." << endl;

			// ����ġ ��Ұ� 0���� ���
			if (GetCurrentSketch()->GetSketchItemListSize() == 0)
			{
				GetFeaturesPtr()->DeleteByName(GetCurrentSketch()->GetName().c_str());
				GetPartDocumentPtr()->Update();
			}

			// Operation�� �� ���� �������� �ʾҰų�, ����ġ ��Ұ� 0���� �� ����
			TSIThrowExceptionIf<TSIArgumentException>(GetCurrentSketch()->GetUpdateCount() == 0, "No operation has been done!");
			
			// ����ġ ����
			SetHistoryFeature(CopyFeature(GetCurrentSketch()));
			
			TSIThrowExceptionIf<TSIArgumentException>(GetCurrentSketch()->GetSketchItemListSize() == 0, "Sketch is empty!");

			// ����ġ�� ������ ��� �����
			if(GetCurrentSketch()->IsModified())
				Manipulation::RegenerateFeature(GetCurrentSketch()->GetOriginalOrder(), m_currentState, 0, this);

			SetCurrentSketch(NULL);
		}
	}
	catch (TSIArgumentException & e) // ����ġ�� ����ų� �ƹ� �۾��� �Ͼ�� �ʾ��� �� ����
	{
		CMD::SetColor(D_BLUE, YELLOW);
		cout << e.GetMessageW() << endl;
		
		// �ƹ� �۾��� �Ͼ�� �ʾ��� ��
		if (GetCurrentSketch()->GetUpdateCount() == 0)
			m_updateCount--;
		
		Manipulation::RegenerateFeature(GetCurrentSketch()->GetOriginalOrder(), m_currentState - 1, 0, this);

		SetCurrentSketch(NULL);
	}
}

// �� ���� ���۷����� ���� ���� ��, ���۷��� ���� ��ɾ� ����
void Part::OnSelectingReferences(char * command)
{
	token = command;

	// ���۷��� ���� ��ɾ� ����
	GetCurrentReference()->RunCommands(command);
	
	try
	{
		if (token == "���" || token == "cancel")
		{
			CMD::SetColor(D_BLUE, YELLOW);
			SetCurrentReferencesPtr(NULL);
		
			SetCurrentReference(NULL);
			TSIThrowExceptionIf<TSIArgumentException>(token == "���" || token == "cancel", "Nothing is selected!");
		}
	}
	catch (TSIArgumentException & e)
	{
		cout << e.GetMessageW() << endl;
	}
}

// �� ���� Ư¡������ ���� ���� ��, Ư¡���� ���� ��ɾ� ����
void Part::OnSelectingFeatures(char * command)
{
	token = command;

	// ���۷��� ���� ��ɾ� ����
	GetCurrentFeature()->RunCommands(command);
	
	try
	{
		if (token == "���" || token == "cancel")
		{
			CMD::SetColor(D_BLUE, YELLOW);
			SetCurrentReferencesPtr(NULL);
		
			SetCurrentFeature(NULL);
			TSIThrowExceptionIf<TSIArgumentException>(token == "���" || token == "cancel", "Nothing is selected!");
		}
	}
	catch (TSIArgumentException & e)
	{
		cout << e.GetMessageW() << endl;
	}
}


// TransCAD �� ������ �����Ͽ� �����ϴ� �Լ�. Reset �Լ����� ȣ��
void Part::AddInfo(void)
{
	if (m_updateCount != 0)
		return;
	
	Clear();

	// �ֽ� TransCAD ���� �߰�
	for (int i = 1; i <= GetFeaturesPtr()->GetCount(); ++i)
	{
		CMD::SetTitle(TEXT("Loading current features"), i);
		
		AddFeature(GetFeaturesPtr()->GetItem(i));
	}

	// Operation(����, ����, ����)�� �߻��ϱ� ���������� Ư¡���� ����� ����/����
	// Operation�� �߻��ϴ� ����, ������ ����� ����� �ʱ� ����� �ȴ�.
	for (int i = 0; i < GetFeatureListSize(); ++i)
	{
		CMD::SetTitle(TEXT("Loading current features"), i);
		
		Feature * pFeature = CopyFeature(GetFeature(i));
		SetHistoryFeature(pFeature);
	}

	m_initialState = GetHistoryFeatureListSize(); // �ʱ� ���� ����
	m_currentState = m_initialState;

	CMD::SetTitle(TEXT("TransCAD Script Interface 1.0"), 0);
}

// Ư¡���� �߰�
void Part::AddFeature(TransCAD::IFeaturePtr spFeature)
{
	Feature * pFeature = 0;
	
	switch(spFeature->Type)
	{
		case TransCAD::StdSketchFeature:
			pFeature = new FeatureSketch(this, 0);
			break;
		case TransCAD::StdSolidProtrusionExtrudeFeature:
			pFeature = new FeatureExtrude(this, 1);
			break;
		case TransCAD::StdSolidCutExtrudeFeature:
			pFeature = new FeatureExtrude(this, 2);
			break;
		case TransCAD::StdSolidFilletConstantFeature:
			pFeature = new FeatureFillet(this, 3);
			break;
		case TransCAD::StdSolidProtrusionSweepFeature:
			pFeature = new FeatureSweep(this, 4);
			break;
		case TransCAD::StdSolidCutSweepFeature:
			pFeature = new FeatureSweep(this, 5);
			break;
		case TransCAD::StdSolidChamferFeature:
			pFeature = new FeatureChamfer(this, 6);
			break;
		case TransCAD::StdSolidProtrusionRevolveFeature:
			pFeature = new FeatureRevolve(this, 7);
			break;
		case TransCAD::StdSolidCutRevolveFeature:
			pFeature = new FeatureRevolve(this, 8);
			break;
		case TransCAD::StdSolidRevolveWithExternalAxisFeature:
			pFeature = new FeatureRevolve(this, 9);
			break;
		case TransCAD::StdDatumPlaneOffsetFeature:
			if (((TransCAD::IStdDatumPlaneOffsetFeaturePtr)spFeature)->GetIsFree() == VARIANT_FALSE) pFeature = new FeatureDatumPlaneOffset(this, 10);
			else pFeature = new FeatureDatumPlaneEquation(this, 21);
			break;
		case TransCAD::StdSolidOperatePatternRectangularFeature:
			pFeature = new FeaturePatternRectangular(this, 11);
			break;
		case TransCAD::StdSolidOperatePatternCircularFeature:
			pFeature = new FeaturePatternCircular(this, 12);
			break;
		case TransCAD::StdSolidHoleCounterboredFeature:
			pFeature = new FeatureHole(this, 13);
			break;
		case TransCAD::StdSolidHoleCountersunkFeature:
			pFeature = new FeatureHole(this, 14);
			break;
		case TransCAD::StdSolidHoleSimpleFeature:
			pFeature = new FeatureHole(this, 15);
			break;
		case TransCAD::StdSolidShellFeature:
			pFeature = new FeatureShell(this, 16);
			break;
		case TransCAD::StdSolidLoftSectionsFeature:
			pFeature = new FeatureLoft(this, 17);
			break;
		case TransCAD::StdSolidDraftFeature:
			pFeature = new FeatureDraft(this, 18);
			break;
		case TransCAD::StdSolidOffsetFeature:
			pFeature = new FeatureOffset(this, 19);
			break;
		case TransCAD::StdSolidImportedBrepFeature:
			pFeature = new FeatureBrep(this, 20);
			break;
	}

	if (pFeature)
	{
		pFeature->AddInfo(spFeature);
		pFeature->SetOrder(GetFeatureListSize());
		SetFeature(pFeature);
	}
}

// Ư¡������ �̸����κ��� ���� �����ϴ� Feature ��ü ����
Feature * Part::GetFeatureByName(string name)
{
	Feature * pFeature = 0;
	
	for (int i = 0; i < GetFeatureListSize(); ++i)
	{
		if (GetFeature(i)->GetName() == name)
		{
			pFeature = GetFeature(i);
			break;
		}
	}
	
	return pFeature;
}

// Ư¡������ �̸����κ��� �����丮�� �����ϴ� ù Feature ��ü ����
Feature * Part::GetHistoryFeatureByName(string name)
{
	Feature * pFeature = 0;
	
	for (int i = 0; i < GetHistoryFeatureListSize(); ++i)
	{
		if (GetHistoryFeature(i)->GetName() == name)
		{
			pFeature = GetHistoryFeature(i);
			break;
		}
	}
	
	return pFeature;
}

// Feature �����͸� �����ϴ� �Լ�. ���� ���縦 ����
Feature * Part::CopyFeature(Feature * pFeature)
{
	Feature * pCopiedFeature = 0;
	
	if (pFeature->GetType() == 0)
		pCopiedFeature = new FeatureSketch(*(FeatureSketch*)pFeature);
	else if (pFeature->GetType() == 1 || pFeature->GetType() == 2)
		pCopiedFeature = new FeatureExtrude(*(FeatureExtrude*)pFeature);
	else if (pFeature->GetType() == 3)
		pCopiedFeature = new FeatureFillet(*(FeatureFillet*)pFeature);
	else if (pFeature->GetType() == 4 || pFeature->GetType() == 5)
		pCopiedFeature = new FeatureSweep(*(FeatureSweep*)pFeature);
	else if (pFeature->GetType() == 6)
		pCopiedFeature = new FeatureChamfer(*(FeatureChamfer*)pFeature);
	else if (pFeature->GetType() == 7 || pFeature->GetType() == 8 || pFeature->GetType() == 9)
		pCopiedFeature = new FeatureRevolve(*(FeatureRevolve*)pFeature);
	else if (pFeature->GetType() == 10)
		pCopiedFeature = new FeatureDatumPlaneOffset(*(FeatureDatumPlaneOffset*)pFeature);
	else if (pFeature->GetType() == 11)
		pCopiedFeature = new FeaturePatternRectangular(*(FeaturePatternRectangular*)pFeature);
	else if (pFeature->GetType() == 12)
		pCopiedFeature = new FeaturePatternCircular(*(FeaturePatternCircular*)pFeature);
	else if (pFeature->GetType() == 13 || pFeature->GetType() == 14 || pFeature->GetType() == 15)
		pCopiedFeature = new FeatureHole(*(FeatureHole*)pFeature);
	else if (pFeature->GetType() == 16)
		pCopiedFeature = new FeatureShell(*(FeatureShell*)pFeature);
	else if (pFeature->GetType() == 17)
		pCopiedFeature = new FeatureLoft(*(FeatureLoft*)pFeature);
	else if (pFeature->GetType() == 18)
		pCopiedFeature = new FeatureDraft(*(FeatureDraft*)pFeature);
	else if (pFeature->GetType() == 19)
		pCopiedFeature = new FeatureOffset(*(FeatureOffset*)pFeature);
	else if (pFeature->GetType() == 20)
		pCopiedFeature = new FeatureBrep(*(FeatureBrep*)pFeature);
	else if (pFeature->GetType() == 21)
		pCopiedFeature = new FeatureDatumPlaneEquation(*(FeatureDatumPlaneEquation*)pFeature);

	return pCopiedFeature;
}


// ��ɾ ���� ������ ����ϴ� �Լ�
void Part::Help(char * command)
{
	CMD::SetColor(D_BLUE, SKYBLUE); // cmd ���� ����(���:�Ķ�, ����:���� ��ī�̺��)

	string name;
	
	if ((name = StringToken::GetString( NULL, seps_blank, command )) == "FAIL")
		name = "all";

	if (name == "all")
	{
		cout << "[TransCAD Script Interface Function List]" << endl;
		cout << " Please enter 'help FunctionName (���� �Լ���)' to see the details for each function" << endl;
		cout << "	- Functions for Selection" << endl;
		cout << "		selectplane (��鼱��)" << endl;
		cout << "		selectbrep (��Ҽ���)" << endl;
		cout << "		selectbreps (��ҵ鼱��)" << endl;
		cout << "		selectfeature (���ļ���)" << endl;
		cout << "		selectfeatures (���ĵ鼱��)" << endl;
		cout << "		selectfacebyaxis (�鼱��)" << endl;
		cout << "		selectedgebypoint (�����𼭸�����)" << endl;
		cout << "		selectedgebypoints (�����𼭸�����)" << endl;
		cout << "	- Functions for Creating a Feature" << endl;
		cout << "		opensketch (����ġ����)" << endl;
		cout << "		closesketch (����ġ����)" << endl;
		cout << "		createproextrude (����)" << endl;
		cout << "		createcutextrude (������)" << endl;
		cout << "		createprorevolve (ȸ��)" << endl;
		cout << "		createcutrevolve (ȸ����)" << endl;
		cout << "		createrevolvewithaxis (��ȸ��)" << endl;
		cout << "		createprosweep (����)" << endl;
		cout << "		createcutsweep (������)" << endl;
		cout << "		createloft (����Ʈ)" << endl;
		cout << "		createfillet (�ʷ�)" << endl;
		cout << "		createchamfer (è��)" << endl;
		cout << "		createshell (��)" << endl;
		cout << "		createdraft (����)" << endl;
		cout << "		createoffset (������)" << endl;
		cout << "		createrectpattern (�簢����)" << endl;
		cout << "		createcircpattern (��������)" << endl;
		cout << "		createholecounterbored (ī���ͺ���)" << endl;
		cout << "		createholecountersunk (ī���ͽ�ũ)" << endl;
		cout << "		createholesimple (����)" << endl;
		cout << "		createdatumplaneoffset (�����)" << endl;
		cout << "		createdatumplaneequation (�����2)" << endl;
		cout << "		importbrep (���ǥ���Է�)" << endl;
		cout << "	- Functions for Creating a Sketch" << endl;
		cout << "		createline (��)" << endl;
		cout << "		createcenterline (�߽ɼ�)" << endl;
		cout << "		createcircle (��)" << endl;
		cout << "		createarc (ȣ)" << endl;
		cout << "		createpolyline (���ἱ)" << endl;
		cout << "		createrectangle (�簢��)" << endl;
		cout << "		createpolygon (�ٰ���)" << endl;
		cout << "		filletlines (���ʷ�)" << endl;
		cout << "		chamferlines (��è��)" << endl;
		cout << "		extendlines (������)" << endl;
		cout << "		translatesketch (����ġ�̵�)" << endl;
		cout << "		rotatesketch (����ġȸ��)" << endl;
		cout << "		setcoordinatesystem (��ǥ��)" << endl;
		cout << "	- Functions for Manipulation" << endl;
		cout << "		modify (����)" << endl;
		cout << "		delete (����)" << endl;
		cout << "		undo (�ڷ�)" << endl;
		cout << "		redo (������)" << endl;
		cout << "	- Functions for Getting Information" << endl;
		cout << "		ask (����)" << endl;
		cout << "		parent (�θ�)" << endl;
		cout << "		children (�ڽ�)" << endl;
		cout << "		highlight (����)" << endl;
		cout << "	- Functions for Making Customized Features" << endl;
		cout << "		customfeature (Ŀ��������)" << endl;
		cout << "		parameter (�Ķ����)" << endl;
		cout << "	- Other Functions" << endl;
		cout << "		newpartdoc (������)" << endl;
		cout << "		reset (����)" << endl;
		cout << "		clear (����)" << endl;
		cout << "		import (�ҷ�����)" << endl;
		cout << "		export (��������)" << endl;
		cout << "		convertmesh (�Ž���ȯ)" << endl;
		cout << "		restore (����)" << endl;
		cout << "		exit (����)" << endl;
		cout << "		exitall (�������)" << endl;
		cout << "	- Custom Features" << endl;
		
		// ���� ���ǵ� Ŀ���� ������ ����� ����Ѵ�
		if (GetCustomFeatureListSize() == 0)
			cout << "		No custom feature is defined in the current session" << endl;
		else
		{
			for (int i = 0; i < GetCustomFeatureListSize(); ++i)
				cout << "		" << GetCustomFeature(i)->GetName() << endl;
		}
	}
	else if (GetCustomFeatureByName(name)) // Ŀ���� ���� ����
	{
		GetCustomFeatureByName(name)->Help();
	}
	else if ((fType = Commands.GetFeatureType(name)) != NoFeature)	// Ư¡���� ����
	{
		Feature * pFeature = 0;
		
		switch(fType)
		{
			case Sketch_Type:
				pFeature = new FeatureSketch(NULL, 0);
				break;
			case ProExtrude_Type:
				pFeature = new FeatureExtrude(NULL, 1);
				break;
			case CutExtrude_Type:
				pFeature = new FeatureExtrude(NULL, 2);
				break;
			case Fillet_Type:
				pFeature = new FeatureFillet(NULL, 3);
				break;
			case ProSweep_Type:
				pFeature = new FeatureSweep(NULL, 4);
				break;
			case CutSweep_Type:
				pFeature = new FeatureSweep(NULL, 5);
				break;
			case Chamfer_Type:
				pFeature = new FeatureChamfer(NULL, 6);
				break;
			case ProRevolve_Type:
				pFeature = new FeatureRevolve(NULL, 7);
				break;
			case CutRevolve_Type:
				pFeature = new FeatureRevolve(NULL, 8);
				break;
			case RevolveWithAxis_Type:
				pFeature = new FeatureRevolve(NULL, 9);
				break;
			case DatumPlaneOffset_Type:
				pFeature = new FeatureDatumPlaneOffset(NULL, 10);
				break;
			case PatternRectangular_Type:
				pFeature = new FeaturePatternRectangular(NULL, 11);
				break;
			case PatternCircular_Type:
				pFeature = new FeaturePatternCircular(NULL, 12);
				break;
			case HoleCounterbored_Type:
				pFeature = new FeatureHole(NULL, 13);
				break;
			case HoleCountersunk_Type:
				pFeature = new FeatureHole(NULL, 14);
				break;
			case HoleSimple_Type:
				pFeature = new FeatureHole(NULL, 15);
				break;
			case Shell_Type:
				pFeature = new FeatureShell(NULL, 16);
				break;
			case Loft_Type:
				pFeature = new FeatureLoft(NULL, 17);
				break;
			case Draft_Type:
				pFeature = new FeatureDraft(NULL, 18);
				break;
			case Offset_Type:
				pFeature = new FeatureOffset(NULL, 19);
				break;
			case BrepSolid_Type:
				pFeature = new FeatureBrep(NULL, 20);
				break;
			case DatumPlaneEquation_Type:
			pFeature = new FeatureDatumPlaneEquation(this, 21);
				break;
		}

		if (pFeature)
		{
			pFeature->Help();
			delete pFeature;
		}
	}
	else if ((rType = Commands.GetReferenceType(name)) != NoReference)	// ���۷��� ����
	{
		Reference * pReference = 0;

		switch(rType)
		{
			case Plane_Type:
				pReference = new ReferenceExplicitModelObject(NULL, 0);
				break;
			case Brep_Type:
				pReference = new ReferenceBrep(NULL, 1);
				break;
			case Breps_Type:
				pReference = new ReferenceBrep(NULL, 2);
				break;
			case FaceByAxis_Type:
				pReference = new ReferenceBrep(NULL, 3);
				break;
			case EdgeByPoint_Type:
				pReference = new ReferenceBrep(NULL, 4);
				break;
			case EdgeByPoints_Type:
				pReference = new ReferenceBrep(NULL, 5);
				break;
			case Feature_Type:
				pReference = new ReferenceFeature(NULL, 6);
				break;
			case Features_Type:
				pReference = new ReferenceFeature(NULL, 7);
				break;
		}

		if (pReference)
		{
			pReference->Help();
			delete pReference;
		}
	}
	else if ((sType = Commands.GetSketchItemType(name)) != NoSketchItem)	// SketchItem ����
	{
		SketchItem * pSketchItem = 0;
	
		switch(sType)
		{
			case Line_Type:
				pSketchItem = new SketchItemLine(NULL, 0);
				break;
			case CenterLine_Type:
				pSketchItem = new SketchItemCenterLine(NULL, 1);
				break;
			case Circle_Type:
				pSketchItem = new SketchItemCircle(NULL, 2);
				break;
			case Arc_Type:
				pSketchItem = new SketchItemArc(NULL, 3);
				break;
			case PolyLine_Type:
				pSketchItem = new SketchItemPolyLine(NULL, 4);
				break;
			case Rectangle_Type:
				pSketchItem = new SketchItemRectangle(NULL, 5);
				break;
			case FilletLines_Type:
				pSketchItem = new SketchItemFillet(NULL, 6);
				break;
			case ChamferLines_Type:
				pSketchItem = new SketchItemChamfer(NULL, 7);
				break;
			case ExtendLines_Type:
				pSketchItem = new SketchItemExtendLines(NULL, 8);
				break;
			case Polygon_Type:
				pSketchItem = new SketchItemPolygon(NULL, 9);
				break;
			case TranslateSketch_Type:
				pSketchItem = new SketchItemTranslate(NULL, 10);
				break;
			case RotateSketch_Type:
				pSketchItem = new SketchItemRotate(NULL, 11);
				break;
		}

		if (pSketchItem)
		{
			pSketchItem->Help();
			delete pSketchItem;
		}
	}
	else if (name == "closesketch" || name == "����ġ����")
	{
		cout << " [closesketch]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "closesketch" << endl;
		cout << " [NOTE] " << "This function must be called after 'opensketch' function" << endl;
	}
	else if (name == "setcoordinatesystem" || name == "��ǥ��")
	{
		cout << " [setcoordinatesystem p1 p2 p3 p4 p5 p6 p7 p8 p9]" << endl;
		cout << " -p1 : " << "Origin (X)" << endl;
		cout << " -p2 : " << "Origin (Y)" << endl;
		cout << " -p3 : " << "Origin (Z)" << endl;
		cout << " -p4 : " << "X Direction (X)" << endl;
		cout << " -p5 : " << "X Direction (Y)" << endl;
		cout << " -p6 : " << "X Direction (Z)" << endl;
		cout << " -p7 : " << "Y Direction (X)" << endl;
		cout << " -p8 : " << "Y Direction (Y)" << endl;
		cout << " -p9 : " << "Y Direction (Z)" << endl;
		cout << " [EXAMPLE] " << "setcoordinatesystem 0 0 100 0 1 0 0 0 1" << endl;
		cout << " [NOTE] " << "This function must be called after 'opensketch' function" << endl;
	}
	else if (name == "modify" || name == "����")
	{
		cout << " [modify p1 p2 ... pn]" << endl;
		cout << " -p1 : " << "Feature Name" << endl;
		cout << " -p2 ... pn : Total Number of Parameters Varies" << endl;
		cout << "  # Sketch-based features" << endl;
		cout << "   [EXAMPLE 1] " << "modify Extrude1 100 0 0 0 0" << endl;
		cout << "   [EXAMPLE 2] " << "modify Revolve1 270 0 0 0 0" << endl;
		cout << "   [NOTE] " << "All the parameters except the sketch name are required" << endl;
		cout << "  # Other features" << endl;
		cout << "   [EXAMPLE 1] " << "modify RectPattern1 1 0 0 0 1 0 4 50 3 30" << endl;
		cout << "   [EXAMPLE 2] " << "modify CircPattern1 0 0 0 0 0 1 8 45 2 30 1" << endl;
		cout << "   [EXAMPLE 3] " << "modify Fillet1 10 0" << endl;
		cout << "   [EXAMPLE 4] " << "modify Chamfer1 10" << endl;
		cout << "   [EXAMPLE 5] " << "modify Plane1 50 0" << endl;
		cout << "   [NOTE] " << "Required parameters are the same" << endl;
		cout << "  # Sketches" << endl;
		cout << "   [EXAMPLE]" << "	modify Sketch1" << endl;
		cout << "		createline Line1 0 0 100 0" << endl;
		cout << "		undo" << endl;
		cout << "		redo" << endl;
		cout << "		delete Line1" << endl;
		cout << "		createcircle Circle1 0 0 50" << endl;
		cout << "		modify Circle1 0 0 30" << endl;
		cout << "		closesketch" << endl;
		cout << "   [NOTE 1] " << "'modify', 'delete', 'undo', and 'redo' can be used during sketch" << endl;
		cout << "   [NOTE 2] " << "While modifying a sketch, features created after the sketch will be temporarily hidden until the sketch is closed" << endl;
		cout << "   [NOTE 3] " << "'closesketch' must be called after the modification" << endl;
	}
	else if (name == "delete" || name == "����")
	{
		cout << " [delete p1]" << endl;
		cout << " -p1 : " << "Feature (Sketch Item) Name" << endl;
		cout << " [EXAMPLE 1] " << "delete Fillet1" << endl;
		cout << " [EXAMPLE 2] " << "delete Line1" << endl;
		cout << " [NOTE 1] " << "Child features will be deleted too" << endl;
		cout << " [NOTE 2] " << "Deleting a sketch item can be done during sketch" << endl;
	}
	else if (name == "undo" || name == "�ڷ�")
	{
		cout << " [undo]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "undo" << endl;
		cout << " [NOTE] " << "Before undoing, more than one operation have to be finished before" << endl;
	}
	else if (name == "redo" || name == "������")
	{
		cout << " [redo]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "redo" << endl;
		cout << " [NOTE] " << "Before redoing, 'undo' should be called before" << endl;
	}
	else if (name == "reset" || name == "����")
	{
		cout << " [reset]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "reset" << endl;
		cout << " [NOTE] " << "You must enter this function if you change the model (e.g. K1 �� K3) without re-open the part document" << endl;
	}
	else if (name == "ask" || name == "����")
	{
		cout << " [ask p1]" << endl;
		cout << " -p1 : " << "Feature Name or 'all' or 'history'" << endl;
		cout << " [EXAMPLE 1] " << "ask all" << endl;
		cout << " [EXAMPLE 2] " << "ask history" << endl;
		cout << " [EXAMPLE 3] " << "ask Extrude1" << endl;
		cout << " [NOTE 1] " << "'ask all': This is for getting information of current features" << endl;
		cout << " [NOTE 2] " << "'ask history': This is for getting information of history" << endl;
		cout << " [NOTE 3] " << "'ask FeatureName': This is for getting information of a feature" << endl;
	}
	else if (name == "clear" || name == "����")
	{
		cout << " [clear]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "clear" << endl;
		cout << " [NOTE] " << "This function is for clearing the window" << endl;
	}
	else if (name == "newpartdoc" || name == "������")
	{
		cout << " [newpartdoc]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "newpartdoc" << endl;
		cout << " [NOTE] " << "This function is for creating a new part document" << endl;
	}
	else if (name == "import" || name == "�ҷ�����")
	{
		cout << " [import p1]" << endl;
		cout << " - p1 : " << "File Path" << endl;
		cout << " [EXAMPLE 1] " << "import C:\\K1.xml" << endl;
		cout << " [EXAMPLE 2] " << "import C:\\K1.CATScript" << endl;
		cout << " [EXAMPLE 3] " << "import C:\\K1.prt" << endl;
		cout << " [NOTE] " << "Supporting Formats: .xml, .CATScript, .prt, .stp, .sat, .igs" << endl;
	}
	else if (name == "export" || name == "��������")
	{
		cout << " [export p1]" << endl;
		cout << " - p1 : " << "File Path" << endl;
		cout << " [EXAMPLE 1] " << "export C:\\K1.xml" << endl;
		cout << " [EXAMPLE 2] " << "export C:\\K1.CATScript" << endl;
		cout << " [EXAMPLE 3] " << "export C:\\K1.prt" << endl;
		cout << " [EXAMPLE 4] " << "export C:\\K1.x3d" << endl;
		cout << " [EXAMPLE 5] " << "export C:\\K1.stp" << endl;
		cout << " [NOTE] " << "Supporting Formats: .xml, .CATScript, .prt, .stp, .sat, .igs, .x3d, .obj, .stl, .ply, .wrl, .pdf" << endl;
	}
	else if (name == "convertmesh" || name == "�Ž���ȯ")
	{
		cout << " [convertmesh p1 p2]" << endl;
		cout << " - p1 : " << "Source File Path" << endl;
		cout << " - p2 : " << "Target File Path" << endl;
		cout << " [EXAMPLE 1] " << "convertmesh C:\\K1.obj C:\\K1.stl" << endl;
		cout << " [EXAMPLE 2] " << "convertmesh C:\\K1.stl C:\\K1.ply" << endl;
		cout << " [EXAMPLE 3] " << "convertmesh C:\\K1.ply C:\\K1.x3d" << endl;
		cout << " [NOTE 1] " << "Supporting Input Formats: .x3d, .obj, .stl, .ply, .wrl" << endl;
		cout << " [NOTE 2] " << "Supporting Output Formats: .x3d, .obj, .stl, .ply, .wrl" << endl;
	}
	else if (name == "exit" || name == "����")
	{
		cout << " [exit]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "exit" << endl;
		cout << " [NOTE] " << "This function is for exiting from the script interface" << endl;
	}
	else if (name == "exitall" || name == "�������")
	{
		cout << " [exitall]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "exitall" << endl;
		cout << " [NOTE] " << "This function is for terminating both script interface and TransCAD" << endl;
	}
	else if (name == "restore" || name == "����")
	{
		cout << " [restore]" << endl;
		cout << " - No parameter needed" << endl;
		cout << " [EXAMPLE] " << "restore" << endl;
		cout << " [NOTE] " << "This function can be only used when TransCAD has unexpectedly shut down or closed" << endl;
	}
	else if (name == "parent" || name == "�θ�")
	{
		cout << " [parent p1]" << endl;
		cout << " - p1 : " << "Feature Name" << endl;
		cout << " [EXAMPLE 1] " << "parent Extrude1" << endl;
		cout << " [EXAMPLE 2] " << "parent Sketch2" << endl;
		cout << " [NOTE] " << "This function is for getting parent feature name" << endl;
	}
	else if (name == "children" || name == "�ڽ�")
	{
		cout << " [children p1]" << endl;
		cout << " - p1 : " << "Feature Name" << endl;
		cout << " [EXAMPLE 1] " << "children XYPlane" << endl;
		cout << " [EXAMPLE 2] " << "children Extrude1" << endl;
		cout << " [NOTE] " << "This function is for getting all children feature name" << endl;
	}
	else if (name == "highlight" || name == "����")
	{
		cout << " [highlight p1]" << endl;
		cout << " - p1 : " << "Feature Name" << endl;
		cout << " [EXAMPLE 1] " << "highlight Extrude1" << endl;
		cout << " [EXAMPLE 2] " << "highlight Fillet1" << endl;
		cout << " [EXAMPLE 3] " << "highlight Line1" << endl;
		cout << " [NOTE 1] " << "This function is for highlighting the selected feature by blinking it" << endl;
		cout << " [NOTE 2] " << "You can also use this function for sketch items during sketch" << endl;
	}
	else if (name == "customfeature" || name == "Ŀ��������")
	{
		cout << " [customfeature p1 p2 ... pn]" << endl;
		cout << " -p1 : " << "Custom Feature Name" << endl;
		cout << " -p2 ... pn : Total Number of Parameters Varies" << endl;
		cout << " [EXAMPLE 1] " << "	customfeature pe 'a' 'b' 'c'" << endl;
		cout << "		createproextrude Extrude'a' Sketch'b' 'c' 0 0 0 0" << endl;
		cout << "		endcustom" << endl;
		cout << "		pe 1 1 50" << endl;
		cout << " [EXAMPLE 2] " << "	customfeature cylinder 'a' 'b' 'c' 'd' 'e' 'f'" << endl;
		cout << "		selectplane 'a'" << endl;
		cout << "		opensketch Sketch'b'" << endl;
		cout << "		createcircle Circle1 'c' 'd' 'e'" << endl;
		cout << "		closesketch" << endl;
		cout << "		createproextrude Extrude'b' Sketch'b' 'f' 0 0 0 0" << endl;
		cout << "		endcustom" << endl;
		cout << "		cylinder xy 1 0 0 20 100" << endl;
		cout << "		cylinder xy 2 50 50 20 100" << endl;
		cout << " [EXAMPLE 3] " << "	customfeature sphere 'a' 'b' 'c' 'd' 'e'" << endl;
		cout << "		parameter 'f'='c'+'e'" << endl;
		cout << "		parameter 'g'='c'-'e'" << endl;
		cout << "		selectplane 'a'" << endl;
		cout << "		opensketch Sketch'b'" << endl;
		cout << "		createarc Arc1 'c' 'd' 'f' 'd' 'g' 'd'" << endl;
		cout << "		createline Line1 'f' 'd' 'g' 'd'" << endl;
		cout << "		createcenterline CenterLine1 'f' 'd' 'g' 'd'" << endl;
		cout << "		closesketch" << endl;
		cout << "		createprorevolve Revolve'b' Sketch'b' 360 0 0 0 0" << endl;
		cout << "		endcustom" << endl;
		cout << "		sphere xy 1 0 0 20" << endl;
		cout << "		sphere xy 2 50 50 20" << endl;
		cout << " [NOTE 1] " << "This function is for making a customized feature" << endl;
		cout << " [NOTE 2] " << "It is recommended to use quotation marks ('a' or \"a\") for parameters" << endl;
		cout << " [NOTE 3] " << "Define your own custom features at 'D:\\CustomFeatures.txt' beforehand" << endl;
		cout << " [NOTE 4] " << "'endcustom' function must be called to stop defining custom feature" << endl;
	}
	else if (name == "parameter" || name == "�Ķ����")
	{
		cout << " [parameter equation]" << endl;
		cout << " -equation : " << "Equation for Defining a Parameter" << endl;
		cout << " [EXAMPLE 1] " << "parameter 'c'='a'+'b'" << endl;
		cout << " [EXAMPLE 2] " << "parameter 'c'=('a'+'b')/2" << endl;
		cout << " [NOTE 1] " << "This function is for defining a parameter in a customized feature" << endl;
		cout << " [NOTE 2] " << "New parameter name must be on the left side of the equation" << endl;
		cout << " [NOTE 3] " << "No blank is allowd in the equation" << endl;
		cout << " [NOTE 4] " << "Minus sign cannot be located at the very first on the right side \n (ex. 'c'=-1*('a'+'b') (X) �� 'c'=(-1)*('a'+'b') (O))" << endl;
		cout << " [NOTE 5] " << "This function should be called after 'customfeature' function" << endl;
	}

	CMD::SetColor(D_BLUE, YELLOW);
}


// ��ũ��Ʈ �������̽��� ������ ��, D:\ ��ο� ����Ǿ� �ִ� Ŀ���� ���ĸ� �ҷ��ͼ� �����ϴ� �Լ�
void Part::ReadCustomFeatures(void)
{
	ifstream fin;
	char buffer[1000];
	char * context = NULL;

	string filePath = "D:\\CustomFeatures.txt";	// Ŀ���� ���ĸ� �̸� ������ ���� ���

	fin.open(filePath, ios::in);

	if (!fin)
		return;

	while(!fin.eof()) // CATIA ��ũ�� ������ ������ ���� �б� ����
	{	
		try
		{
			fin.getline(buffer, 1000);   //�� ������ �д´�.

			token = StringToken::GetString( buffer, seps_blank, context );

			if (token.find("customfeature") == 0 || token.find("Ŀ��������") == 0)
			{
				TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, context )) == "FAIL", "Insufficient input parameters!");
				TSIThrowExceptionIf<TSIArgumentException>(GetCustomFeatureByName(token) != NULL, "Enter another name!");
				TSIThrowExceptionIf<TSIArgumentException>(Commands.GetFeatureType(token) != NoFeature, "Enter another name!");
				TSIThrowExceptionIf<TSIArgumentException>(Commands.GetReferenceType(token) != NoReference, "Enter another name!");
				TSIThrowExceptionIf<TSIArgumentException>(Commands.GetCommandType(token) != NoCommand, "Enter another name!");
				TSIThrowExceptionIf<TSIArgumentException>(Commands.GetSketchItemType(token) != NoSketchItem, "Enter another name!");

				CustomFeature * pCusFeature = new CustomFeature(this);
				
				// Ŀ���� ���� �̸� ����
				pCusFeature->SetName(token);
				
				// �Ķ���� ���� (ex. 'a', 'b', 'c' ��)
				while (token != "FAIL")
				{
					token = StringToken::GetString( NULL, seps_blank, context );
		
					if (token != "FAIL")
						pCusFeature->SetParameters(token);
				}

				// ��� ��ɾ� ����
				while (token != "endcustom" && token != "Ŀ��������")
				{
					fin.getline(buffer, 1000);

					token = buffer;
		
					if(token != "endcustom" && token != "Ŀ��������")
						pCusFeature->SetCommands(token);
				}

				// Ŀ�������� ���� ����
				pCusFeature->SetOrder(GetCustomFeatureListSize());
				pCusFeature->Initialize();

				// Ŀ���� ���� ����
				SetCustomFeature(pCusFeature);
			}
		}
		catch (TSIArgumentException & e)
		{
			cout << e.GetMessageW() << endl;
		}
		context = NULL;
	}

	fin.close();
}

// Ŀ���� ���ĸ� �����ϴ� �Լ�
void Part::CreateCustomFeature(char * command)
{
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
		
	// ������ Ŀ���� �̸� ��ø �˻�
	TSIThrowExceptionIf<TSIArgumentException>(GetCustomFeatureByName(token) != NULL, "Enter another name!");
	TSIThrowExceptionIf<TSIArgumentException>(Commands.GetFeatureType(token) != NoFeature, "Enter another name!");
	TSIThrowExceptionIf<TSIArgumentException>(Commands.GetReferenceType(token) != NoReference, "Enter another name!");
	TSIThrowExceptionIf<TSIArgumentException>(Commands.GetCommandType(token) != NoCommand, "Enter another name!");
	TSIThrowExceptionIf<TSIArgumentException>(Commands.GetSketchItemType(token) != NoSketchItem, "Enter another name!");
	
	CustomFeature * pCusFeature = new CustomFeature(this);
	
	pCusFeature->SetName(token);		// Ŀ���� ���� �̸� ����
	pCusFeature->Create(command);	// Ŀ���� ���� ����

	SetCustomFeature(pCusFeature);	// Ŀ���� ���� ����
}

// Ŀ���� ���� �̸����� �˻��ϴ� �Լ�
CustomFeature * Part::GetCustomFeatureByName(string name)
{
	CustomFeature * pCusFeature = 0;
	
	for (int i = 0; i < GetCustomFeatureListSize(); ++i)
	{
		if (GetCustomFeature(i)->GetName() == name)
		{
			pCusFeature = GetCustomFeature(i);
			break;
		}
	}
	
	return pCusFeature;
}