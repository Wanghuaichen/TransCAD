#include "stdafx.h"
#include "FeatureSketch.h"
#include "Part.h"

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

FeatureSketch::FeatureSketch(Part * pPart, int featureType) 
	: Feature(pPart, featureType)
{
	m_updateCount = 0;
	m_undoCount = 0;
	m_redoCount = 0;
}

FeatureSketch::~FeatureSketch(void)
{
	// ����ġ ��� ��� ����
	ClearList(m_sketchItemList);
	
	// ����ġ ���� �̷� ��� ����
	for (int i = 0; i < GetHistorySketchItemListSize(); ++i)
		ClearList(GetHistorySketchItem(i));
}

void FeatureSketch::GetInfo(char * command)
{
	token = StringToken::GetString( NULL, seps_blank, command );
	SetName(token);

	SetReferencePtr(GetPart()->GetCurrentReferencePtr());

	TSIThrowExceptionIf<TSIArgumentException>(!CheckValid(token), "Enter sketch name!");
	TSIThrowExceptionIf<TSIArgumentException>(!CheckExistence(GetName()), "Enter another name!");
	TSIThrowExceptionIf<TSIArgumentException>(GetReferencePtr() == NULL, "Select a reference first!");

	SetSketchPtr(GetPart()->GetFeaturesPtr()->AddNewSketchFeature(GetName().c_str(), GetReferencePtr()));
	
	AddReference(GetReferencePtr());
	GetPart()->SetCurrentReferencePtr(NULL);
	
	// Coordinate ������ �Է¹��� ���ϴ� ���, �ý��� ���ο� ������ ������ ���� ����
	GetSketchPtr()->GetCoordinateSystem(&m_sketchCoord[0], &m_sketchCoord[1], &m_sketchCoord[2],	// Origin
										&m_sketchCoord[3], &m_sketchCoord[4], &m_sketchCoord[5],	// Local X direction
										&m_sketchCoord[6], &m_sketchCoord[7], &m_sketchCoord[8]);	// Local Y direction
	
	GetPart()->SetCurrentSketch(this);
	CMD::SetColor(D_BLUE, WHITE);
}

void FeatureSketch::AddInfo(TransCAD::IFeaturePtr spFeature)
{
	TransCAD::IStdSketchFeaturePtr _spFeature = spFeature;
	SetSketchPtr(_spFeature);

	string name(GetSketchPtr()->GetName());
	SetName(name);
	SetType(0);

	SetReferencePtr(GetSketchPtr()->GetSketchPlane());
	assert(GetReferencePtr());
	AddReference(GetReferencePtr());

	TransCAD::IStdSketchGeometriesPtr _spGeometries = GetSketchPtr()->GetGeometries();
	
	GetSketchPtr()->GetCoordinateSystem(&m_sketchCoord[0], &m_sketchCoord[1], &m_sketchCoord[2],	// Origin
										&m_sketchCoord[3], &m_sketchCoord[4], &m_sketchCoord[5],	// Local X direction
										&m_sketchCoord[6], &m_sketchCoord[7], &m_sketchCoord[8]);	// Local Y direction

	for (int i = 1; i <= _spGeometries->GetCount(); ++ i)
		AddSketchItem(_spGeometries->GetItem(i));

	CheckCloseness();
}

void FeatureSketch::AddSketchItem(TransCAD::IStdSketchGeometryPtr spSketchItem)
{
	SketchItem * pSketchItem = 0;
	
	switch(spSketchItem->Type)
	{
		case TransCAD::Line :
			pSketchItem = new SketchItemLine(this, 0);
			break;
		case TransCAD::Centerline :
			pSketchItem = new SketchItemCenterLine(this, 1);
			break;
		case TransCAD::Circle :
			pSketchItem = new SketchItemCircle(this, 2);
			break;
		case TransCAD::CircularArc :
			pSketchItem = new SketchItemArc(this, 3);
			break;
	}

	if (pSketchItem)
	{
		pSketchItem->AddInfo(spSketchItem);
		SetSketchItem(pSketchItem);
	}
}

void FeatureSketch::Modify(char * command)
{
	// �ش� ����ġ ���Ŀ� ���� �� Ư¡����� �ӽ÷� ����
	for (int i = GetPart()->GetFeatureListSize() - 1; i > GetOrder(); --i)
		GetPart()->GetFeaturesPtr()->DeleteByName(GetPart()->GetFeature(i)->GetName().c_str());

	GetPart()->GetPartDocumentPtr()->Update();
	
	GetPart()->SetCurrentSketch(this);
	CMD::SetColor(D_BLUE, WHITE);

	for (int i = 0; i < GetSketchItemListSize(); ++i)
	{
		GetSketchItem(i)->SetModified(false);
		GetSketchItem(i)->SetCreated(false);
		GetSketchItem(i)->SetDeleted(false);
	}
}

void FeatureSketch::Create(void)
{
	SetSketchPtr(GetPart()->GetFeaturesPtr()->AddNewSketchFeature(GetName().c_str(), GetReference()->GetReferencePtr()));
	assert(GetSketchPtr());

	SetEditorPtr(GetSketchPtr()->OpenEditorEx(VARIANT_FALSE));
	assert(GetEditorPtr());

	GetSketchPtr()->SetCoordinateSystem(m_sketchCoord[0], m_sketchCoord[1], m_sketchCoord[2],	// Origin
										m_sketchCoord[3], m_sketchCoord[4], m_sketchCoord[5],	// Local X direction
										m_sketchCoord[6], m_sketchCoord[7], m_sketchCoord[8]);	// Local Y direction

	for (int i = 0; i < GetSketchItemListSize(); ++i)
		GetSketchItem(i)->Create();

	GetEditorPtr()->Close();

	// ����ġ ��Ұ� �ϳ��� ���� ��� TransCAD���� ����
	if (GetSketchItemListSize() == 0)
	{
		GetPart()->GetFeaturesPtr()->DeleteByName(GetName().c_str());
		GetPart()->GetPartDocumentPtr()->Update();
	}
}

void FeatureSketch::AskInfo(void)
{
	char buffer[500];

	if (!IsModified() && !IsDeleted())
	{
		GetReference()->AskInfo();
		
		cout << "opensketch " << GetName() << endl;

		sprintf_s(buffer, sizeof(buffer), "setcoordinatesystem %f %f %f %f %f %f %f %f %f", 
			m_sketchCoord[0], m_sketchCoord[1], m_sketchCoord[2], m_sketchCoord[3], m_sketchCoord[4], m_sketchCoord[5], m_sketchCoord[6], m_sketchCoord[7], m_sketchCoord[8]);

		cout << buffer << endl;

		for (int i = 0; i < GetSketchItemListSize(); ++i)
			GetSketchItem(i)->AskInfo();
		
		cout << "closesketch" << endl;
	}
	else if (IsModified())
	{
		cout << "modify " << GetName() << endl;

		sprintf_s(buffer, sizeof(buffer), "setcoordinatesystem %f %f %f %f %f %f %f %f %f", 
			m_sketchCoord[0], m_sketchCoord[1], m_sketchCoord[2], m_sketchCoord[3], m_sketchCoord[4], m_sketchCoord[5], m_sketchCoord[6], m_sketchCoord[7], m_sketchCoord[8]);

		cout << buffer << endl;

		// ���ŵ� ����ġ ��Ҹ� ã�Ƽ� ���
		for (int i = GetPart()->GetCurrentState() - 1; i >= 0; --i)
		{
			if (GetPart()->GetHistoryFeature(i)->GetName() == this->GetName()
				&& GetPart()->GetHistoryFeature(i) != this
				&& !GetPart()->GetHistoryFeature(i)->IsDeleted())
			{
				FeatureSketch * recentSketch = (FeatureSketch *)GetPart()->GetHistoryFeature(i);

				for (int j = 0; j < recentSketch->GetSketchItemListSize(); ++j)
				{
					int count = 0;
					
					for (int k = 0; k < this->GetSketchItemListSize(); ++k)
					{
						if (recentSketch->GetSketchItem(j)->GetName() == this->GetSketchItem(k)->GetName())
						{
							count++;
							break;
						}
					}

					if (count == 0)
						cout << "delete " << recentSketch->GetSketchItem(j)->GetName() << endl;
				}

				break;
			}
		}
		///

		// ����ġ ���� ��, ������ ��ҳ� ���� ������ ��ҿ� ���� ���
		for (int i = 0; i < GetSketchItemListSize(); ++i)
		{
			if (GetSketchItem(i)->IsModified() || GetSketchItem(i)->IsCreated())
				GetSketchItem(i)->AskInfo();
		}
		
		cout << "closesketch" << endl;
	}
	else if (IsDeleted())
	{
		sprintf_s(buffer, sizeof(buffer), "delete %s", GetName());
	}
}

void FeatureSketch::Help(void)
{
	cout << " [opensketch p1]" << endl;
	cout << " -p1 : " << "New Sketch Name" << endl;
	cout << " [EXAMPLE] " << "	opensketch Sketch1" << endl;
	cout << "		createcircle Circle1 0 0 30" << endl;
	cout << "		closesketch" << endl;
	cout << " [NOTE 1] " << "Need to select a plane or a face before using this function" << endl;
	cout << " [NOTE 2] " << "'closesketch' function must be entered after finishing the sketch" << endl;
}

/*** ����ġ�� ���� ����ġ ��ҵ�� �����ǹǷ�, Ư¡������ �����Ǵ� ��Ʈ�� ����� ***/
/*** ���� ��Ʈ�� ������ ��ɵ��� �䱸��. �Ʒ��� �׿� ���� ��ɵ��� ������ �Լ��� ***/

// ����ġ ����� ����, ����, ���� �� ȣ��Ǵ� �Լ�. �� ���¿��� Undo�� Redo�� üũ�ϱ� ���� Ȱ��
void FeatureSketch::CheckCurrentState(void)
{
	// ���� ���� ����
	m_currentState = GetHistorySketchItemListSize() - m_undoCount + m_redoCount;
	
	// Undo, Redo�� ���� ���� �ֱٺ��� ���� ���¿��� Ư¡������ ����, ����, ������ �̷������ ��� �� ���� �̷��� ��� ����
	// ���ο� Ư¡������ ��Ͽ� �߰� �ϱ� ���� ȣ��Ǿ�� ��
	if ((m_updateCount != 0)
		&& (m_currentState < GetHistorySketchItemListSize()))
	{
		m_undoCount = 0;
		m_redoCount = 0;
		
		// Initial ���� ������ �̷��� ��� ����
		for (int i = GetHistorySketchItemListSize() - 1; i > m_currentState - 1; --i)
		{
			ClearList(GetHistorySketchItem(i));
			EraseHistorySketchItem(i);
			m_updateCount--;
		}
	}

	m_updateCount++;
}

// ��� ��ɾ �����ϴ� �Լ�
void FeatureSketch::RunCommands(char * command)
{
	try
	{
		TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "No command!");

		// ����ġ ������ ����
		SetEditorPtr(GetSketchPtr()->OpenEditorEx(VARIANT_FALSE));

		if ((sType = Commands.GetSketchItemType(token)) != NoSketchItem)	// SketchItem�� �����ϴ� �κ�
			RunSketchItemCommand(sType, command);
		else if ((gType = Commands.GetCommandType(token)) != NoCommand)		// ��Ÿ ��ɾ �����ϴ� �κ�
			RunGeneralCommand(gType, command);
		else if (token != "closesketch" && token != "����ġ����")
			cout << "Invalid command!" << endl;
			
		// ����ġ ������ ����
		GetEditorPtr()->Close();
		GetPart()->GetPartDocumentPtr()->Update();
	}
	catch (TSIArgumentException & e)
	{
		cout << e.GetMessageW() << endl;
	}
}

// ����ġ ��� ����
void FeatureSketch::RunSketchItemCommand(SketchItemType type, char * command)
{
	SketchItem * pSketchItem = 0;
	
	switch(type)
	{
		case CSYS_Type:
			SetCoordinateSystem(command);
			break;
		case Line_Type:
			pSketchItem = new SketchItemLine(this, 0);
			break;
		case CenterLine_Type:
			pSketchItem = new SketchItemCenterLine(this, 1);
			break;
		case Circle_Type:
			pSketchItem = new SketchItemCircle(this, 2);
			break;
		case Arc_Type:
			pSketchItem = new SketchItemArc(this, 3);
			break;
		case PolyLine_Type:
			pSketchItem = new SketchItemPolyLine(this, 4);
			break;
		case Rectangle_Type:
			pSketchItem = new SketchItemRectangle(this, 5);
			break;
		case FilletLines_Type:
			pSketchItem = new SketchItemFillet(this, 6);
			break;
		case ChamferLines_Type:
			pSketchItem = new SketchItemChamfer(this, 7);
			break;
		case ExtendLines_Type:
			pSketchItem = new SketchItemExtendLines(this, 8);
			break;
		case Polygon_Type:
			pSketchItem = new SketchItemPolygon(this, 9);
			break;
		case TranslateSketch_Type:
			pSketchItem = new SketchItemTranslate(this, 10);
			break;
		case RotateSketch_Type:
			pSketchItem = new SketchItemRotate(this, 11);
			break;
	}

	if (pSketchItem)
	{
		try
		{
			pSketchItem->GetInfo(command);
			
			// Profile�� ��� �߰�
			if (pSketchItem->GetType() < 4)
				SetSketchItem(pSketchItem);
			
			// Sketch�� ���� ���� ���, ���� �� �����Ǿ����� ����
			if (IsModified())
				pSketchItem->SetCreated(true);

			CheckCurrentState();
			SetHistorySketchItem(CopySketchItemList(m_sketchItemList));
		}
		catch (TSIArgumentException & e)
		{
			cout << e.GetMessageW() << endl;
			delete pSketchItem;
		}
	}
}

// ��Ÿ ��ɾ ����
void FeatureSketch::RunGeneralCommand(GeneralType type, char * command)
{
	switch(type)
	{
		case Modify_Type:
			ModifySketchItem(command);
			break;
		case Delete_Type:
			DeleteSketchItem(command);
			break;
		case Undo_Type:
			UndoSketchItem();
			break;
		case Redo_Type:
			RedoSketchItem();
			break;
		case Ask_Type:
			Ask(command);
			break;
		case Parent_Type:
			Information::Parent(command, GetPart());
			break;
		case Highlight_Type:
			HighlightSketchItem(command);
			break;
		case Help_Type:
			GetPart()->Help(command);
			break;
	}
}

// ����ġ ��Ҹ� �����ϴ� �Լ�. ���� ���縦 ����
SketchItem * FeatureSketch::CopySketchItem(SketchItem * pSketchItem)
{
	SketchItem * pCopiedSketchItem = 0;
	
	if (pSketchItem->GetType() == 0)
		pCopiedSketchItem = new SketchItemLine(*(SketchItemLine*)pSketchItem);
	else if (pSketchItem->GetType() == 1)
		pCopiedSketchItem = new SketchItemCenterLine(*(SketchItemCenterLine*)pSketchItem);
	else if (pSketchItem->GetType() == 2)
		pCopiedSketchItem = new SketchItemCircle(*(SketchItemCircle*)pSketchItem);
	else if (pSketchItem->GetType() == 3)
		pCopiedSketchItem = new SketchItemArc(*(SketchItemArc*)pSketchItem);

	pCopiedSketchItem->SetSketch(this);

	return pCopiedSketchItem;
}

// ����ġ ��� ���(�̷�)�� �����ϴ� �Լ�. 
SketchItemList FeatureSketch::CopySketchItemList(SketchItemList pSketchItemList)
{
	SketchItemList temp;

	for (int i = 0; i < (int)pSketchItemList.size(); ++i)
		temp.push_back(CopySketchItem(pSketchItemList[i]));

	return temp;
}

// �̸����� ����ġ ��Ҹ� �������� �Լ�
SketchItem *  FeatureSketch::GetSketchItemByName(string name)
{
	SketchItem * pSketchItem = 0;
	
	for (int i = 0; i < GetSketchItemListSize(); ++i)
	{
		if (GetSketchItem(i)->GetName() == name)
			pSketchItem = GetSketchItem(i);
	}
	
	return pSketchItem;
}

// ����ġ�� Closeness�� üũ�ϴ� �Լ�
void FeatureSketch::CheckCloseness(void)
{
	int totalCount = 0; // ��ü ��� ����
	int connCount = 0;	// ���� �� �κ�
	
	// ����ġ�� ����Ʈ �����
	vector<Point2D> _points;

	// ����ġ�� Line�� Arc�� ���� �� �� ����Ʈ ����. Circle�̳� Centerline�� Closeness�� ���þ���.
	for (int i = 0; i < GetSketchItemListSize(); ++i)
	{
		if (GetSketchItem(i)->GetType() == 0)
		{
			SketchItemLine * pLine = (SketchItemLine *)GetSketchItem(i);
			
			_points.push_back(pLine->GetStartPoint());
			_points.push_back(pLine->GetEndPoint());
			totalCount++;
		}
		else if (GetSketchItem(i)->GetType() == 3)
		{
			SketchItemArc * pArc = (SketchItemArc *)GetSketchItem(i);

			_points.push_back(pArc->GetStartPoint());
			_points.push_back(pArc->GetEndPoint());
			totalCount++;
		}
	}

	// �� ����Ʈ���� ������ X,Y ��ǥ�� ���� ����Ʈ�� �ִ��� �˻�
	for (int i = 0; i < (int)_points.size(); ++i)
	{
		Point2D _point1 = _points[i];
		
		for (int j = 0; j < (int)_points.size(); ++j)
		{
			if (i == j) // ���� ���� �ǳ� ��
				continue;

			Point2D _point2 = _points[j];

			// X, Y ��ǥ�� �����ϸ� �ش� ����Ʈ���� ����
			if (abs(_point1.X() - _point2.X()) <= tolerance
				&& abs(_point1.Y() - _point2.Y()) <= tolerance)
				connCount++;
		}
	}
	
	_points.clear();

	if (totalCount == connCount/2)			// Connected and closed
		SetCloseness(1);
	else if (totalCount - 1 == connCount/2)	// Connected but not closed
		SetCloseness(2);
	else if (totalCount < connCount/2)		// Multiple profiles are connected
		SetCloseness(3);
	else									// Disconnected
		SetCloseness(0);
}

// ����ġ ������ Undo�� �����ϴ� �Լ�
void FeatureSketch::UndoSketchItem(void)
{
	if (m_updateCount > abs(m_undoCount - m_redoCount))
	{
		m_undoCount++;
	
		// ���� ����
		m_currentState = GetHistorySketchItemListSize() - m_undoCount + m_redoCount;
	
		// ����ġ ��� TransCAD���� ����
		for (int i = 0; i < GetSketchItemListSize(); ++i)
			GetEditorPtr()->DeleteByName(GetSketchItem(i)->GetName().c_str());

		// ����ġ ��� ��� ����
		ClearList(m_sketchItemList);

		// �����
		if (m_currentState != 0)
		{
			SketchItemList pList = CopySketchItemList(GetHistorySketchItem(m_currentState - 1));
		
			for (int i = 0; i < (int)pList.size(); ++i)
			{
				SketchItem * pSketchItem = CopySketchItem(pList[i]);
				pSketchItem->Create();
				SetSketchItem(pSketchItem);
			}
		}
	}
}

// ����ġ ������ Redo�� �����ϴ� �Լ�
void FeatureSketch::RedoSketchItem(void)
{
	if (m_undoCount > m_redoCount)
	{
		m_redoCount++;
		
		// ���� ����
		m_currentState = GetHistorySketchItemListSize() - m_undoCount + m_redoCount;
	
		// ����ġ ��� TransCAD���� ����
		for (int i = 0; i < GetSketchItemListSize(); ++i)
			GetEditorPtr()->DeleteByName(GetSketchItem(i)->GetName().c_str());

		// ����ġ ��� ��� ����
		ClearList(m_sketchItemList);

		// �����
		if (m_currentState != 0)
		{
			SketchItemList pList = CopySketchItemList(GetHistorySketchItem(m_currentState - 1));
		
			for (int i = 0; i < (int)pList.size(); ++i)
			{
				SketchItem * pSketchItem = CopySketchItem(pList[i]);
				pSketchItem->Create();
				SetSketchItem(pSketchItem);
			}
		}
	}
}

// ����ġ ��Ҹ� �����ϴ� �Լ�
void FeatureSketch::DeleteSketchItem(char * command)
{
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Enter sketch item name!");
	TSIThrowExceptionIf<TSIArgumentException>(GetSketchItemByName(token) == NULL, "No such a sketch item!");
	
	CheckCurrentState();
	
	//����ġ ��ҳ����� �θ�, �ڽ� ���谡 �����Ƿ� �ش� ��Ҹ� �����ϸ� ��
	for (int i = 0; i < GetSketchItemListSize(); ++i)
	{
		SketchItem * pSketchItem = GetSketchItem(i);
		
		if (token == pSketchItem->GetName())
		{
			EraseSketchItem(i);
			GetEditorPtr()->DeleteByName(token.c_str());
		}
	}
	
	SetHistorySketchItem(CopySketchItemList(m_sketchItemList));
}

// ����ġ ��Ҹ� �����ϴ� �Լ�
void FeatureSketch::ModifySketchItem(char * command)
{
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Enter sketch item name!");
	TSIThrowExceptionIf<TSIArgumentException>(GetSketchItemByName(token) == NULL, "No such a sketch item!");
				
	try
	{
		CheckCurrentState();

		SketchItem * pSketchItem = GetSketchItemByName(token);
		pSketchItem->SetModified(true);
		pSketchItem->Modify(command);

		GetEditorPtr()->DeleteByName(token.c_str());
		pSketchItem->Create();

		SetHistorySketchItem(CopySketchItemList(m_sketchItemList));
	}
	catch (TSIArgumentException & e)
	{
		cout << e.GetMessageW() << endl;
		m_updateCount--;
	}
}

// ����ġ ��ǥ�踦 �����ϴ� �Լ�
void FeatureSketch::SetCoordinateSystem(char * command)
{
	for (int i = 0; i < 9; ++i)
	{
		token = StringToken::GetString( NULL, seps_blank, command );
		m_sketchCoord[i] = atof(token.c_str());
	}
				
	TSIThrowExceptionIf<TSIArgumentException>(token == "FAIL", "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(m_sketchCoord[3] == m_sketchCoord[6] 
											&& m_sketchCoord[4] == m_sketchCoord[7] 
											&& m_sketchCoord[5] == m_sketchCoord[8], "X and Y directions should be different!");	// X, Y ������ ���� ��� ����

	GetSketchPtr()->SetCoordinateSystem(m_sketchCoord[0], m_sketchCoord[1], m_sketchCoord[2],	// Origin
										m_sketchCoord[3], m_sketchCoord[4], m_sketchCoord[5],	// Local X direction
										m_sketchCoord[6], m_sketchCoord[7], m_sketchCoord[8]);	// Local Y direction
}

// ������ ������ �Լ�
void FeatureSketch::Ask(char * command)
{
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Enter feature or sketch item name!");
	
	CMD::SetColor(D_BLUE, SKYBLUE); // cmd ���� ����(���:�Ķ�, ����:���� ��ī�̺��)

	//if (token == GetName())
	//	AskInfo();
	if (GetSketchItemByName(token) != NULL)
		GetSketchItemByName(token)->AskInfo();
	else
		Information::Ask((char *)token.c_str(), GetPart());

	CMD::SetColor(D_BLUE, WHITE);
}

// �ش� ����ġ ��Ҹ� GUI �󿡼� �����̸� ���̶���Ʈ �ϴ� �Լ�
void FeatureSketch::HighlightSketchItem(char * command)
{
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Enter sketch item name!");
	TSIThrowExceptionIf<TSIArgumentException>(GetSketchItemByName(token) == NULL, "No such a sketch item!");
	
	for (int i = 0; i < 5; ++i)
	{
		// ����ġ ��� ����
		GetEditorPtr()->DeleteByName(token.c_str());
		
		// ����ġ ������ ����
		GetEditorPtr()->Close();
		GetPart()->GetPartDocumentPtr()->Update();
		Sleep(300);

		// ����ġ ������ ����
		SetEditorPtr(GetSketchPtr()->OpenEditorEx(VARIANT_FALSE));

		// ����ġ ��� ����
		GetSketchItemByName(token)->Create();

		// ����ġ ������ ����
		GetEditorPtr()->Close();
		GetPart()->GetPartDocumentPtr()->Update();
		Sleep(300);

		// ����ġ ������ ����
		SetEditorPtr(GetSketchPtr()->OpenEditorEx(VARIANT_FALSE));
	}
}