#include "stdafx.h"
#include "Manipulation.h"
#include "CustomFeature.h"

// Ư¡������ �����ϴ� �Լ�
void Manipulation::Modify(char * command, Part * pPart)
{
	string token;

	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(pPart->GetFeatureByName(token) == NULL, "No such a feature!");
	
	pPart->CheckCurrentState();
	
	Feature * pFeature = pPart->CopyFeature(pPart->GetFeatureByName(token));
	
	try
	{
		pFeature->SetModified(true);
		pFeature->Modify(command);
		
		if(!pPart->GetCurrentSketch())
		{
			pPart->SetHistoryFeature(pFeature);
			RegenerateFeature(pFeature->GetOriginalOrder(), pPart->GetCurrentState(), 0, pPart);
		}
	}
	catch (TSIArgumentException & e)
	{
		cout << e.GetMessageW() << endl;
		pPart->SetUpdateCount(pPart->GetUpdateCount() - 1);
	}
}

// Undo�� �����ϴ� �Լ�
void Manipulation::UndoFeature(Part * pPart)
{
	if (pPart->GetUpdateCount() > abs(pPart->GetUndoCount() - pPart->GetRedoCount()))
	{
		pPart->SetUndoCount(pPart->GetUndoCount() + 1);
		
		// Undo �� ���� �ֱ� ������ Ư¡������ ���� ����
		pPart->SetCurrentState(pPart->GetHistoryFeatureListSize() - pPart->GetUndoCount() + pPart->GetRedoCount() + 1);
	
		Feature * pFeature = pPart->CopyFeature(pPart->GetHistoryFeature(pPart->GetCurrentState() - 1));

		// 1. ���� �� ��� �� ����
		if (!pFeature->IsModified() && !pFeature->IsDeleted())
		{
			DeleteFeature(pFeature->GetName(), pPart);
			pPart->GetPartDocumentPtr()->Update(); // ������Ʈ
		}
		// 2 .���� Ȥ�� ���� �� ��� �� ���� �� �� ����
		else
			RegenerateFeature(pFeature->GetOriginalOrder(), pPart->GetCurrentState() - 1, 1, pPart);
	}
}

// Redo�� �����ϴ� �Լ�
void Manipulation::RedoFeature(Part * pPart)
{
	if (pPart->GetUndoCount() > pPart->GetRedoCount())
	{
		pPart->SetRedoCount(pPart->GetRedoCount() + 1);
		
		// Redo �� ���� ���º��� �� �ܰ� �ֱٿ� ������ Ư¡������ ���� ����
		pPart->SetCurrentState(pPart->GetHistoryFeatureListSize() - pPart->GetUndoCount() + pPart->GetRedoCount());

		Feature * pFeature = pPart->CopyFeature(pPart->GetHistoryFeature(pPart->GetCurrentState() - 1));

		// 1. ���� �� ���
		if (pFeature->IsDeleted())
		{
			DeleteFeature(pFeature->GetName(), pPart);
			pPart->GetPartDocumentPtr()->Update(); // ������Ʈ
		}
		// 2. ���� Ȥ�� ���� �� ���
		else
			RegenerateFeature(pFeature->GetOriginalOrder(), pPart->GetCurrentState() - 1, 0, pPart);
	}
}

// �ش� Ư¡������ ������ϴ� �Լ�
void Manipulation::RegenerateFeature(int start, int end, int mode, Part * pPart)
{
	// ���� �� Ư¡������ �����Ͽ� ���߿� ������ Ư¡������� ��� ����
	for (int i = end; i > start; --i)
	{
		if (pPart->GetHistoryFeature(i)->GetOriginalOrder() >= start)
		{
			pPart->GetFeaturesPtr()->DeleteByName(pPart->GetHistoryFeature(i)->GetName().c_str()); // TransCAD���� ����
			
			for (int j = 0; j < pPart->GetFeatureListSize(); ++j) // ���� Ư¡���� ��Ͽ��� ����
			{
				if (pPart->GetHistoryFeature(i)->GetName() == pPart->GetFeature(j)->GetName())
					pPart->EraseFeature(j);
			}
		}
	}
	//

	pPart->GetPartDocumentPtr()->Update(); // ������Ʈ
	
	// �ڿ��� ���� �˻��Ͽ� ���� �� Ư¡������� �����
	for (int i = start; i <= end; ++i)
	{
		Feature * pFeature = 0;

		if (mode == 0)	// �Ϲ����� ���� Ȥ�� Redo�� ���
			pFeature = BacktraceFeature(pPart->GetHistoryFeature(i), start, end, pPart);
		else			// Undo�� ���
			pFeature = BacktraceFeature(pPart->GetHistoryFeature(i), start, end - 1, pPart);
		
		// �ش� Ư¡������ �ִ� ��� ���� Ư¡���� ����Ʈ�� �߰�
		if (pFeature)
		{
			CMD::SetTitle(TEXT("Regenerating features"), i);

			pFeature->Restore();
			pFeature->Create();
			pFeature->SetDeleted(false);
			pFeature->SetModified(false);
			
			pPart->SetFeature(pFeature);
		}
	}
	//

	CMD::SetTitle(TEXT("TransCAD Script Interface 1.0"), 0);
}

// �Է� �� ���� ������ (start ~ end) �Է� �� Ư¡������ ���� �ֽ� ������ �����ϴ� �Լ�
Feature * Manipulation::BacktraceFeature(Feature * pFeature, int start, int end, Part * pPart)
{
	if (pFeature->GetOriginalOrder() < start) // ������ ������ Ư¡�����̸� �ǳ� ��
		return NULL;
	
	for (int i = end; i >= start; --i)
	{
		// �ش� Ư¡������ �θ� ���� Ư¡���� ��Ͽ� ������ �ǳ� ��
		if (!pFeature->IsAncestorAvailable())
			break;
		
		// �ش� Ư¡������ ���� �����Ǿ������� �ǳʶ�
		if (pPart->GetFeatureByName(pFeature->GetName()))
			break;

		// ���� �� Ư¡������ ��쿡�� ����
		if (!pFeature->IsModified() && !pFeature->IsDeleted())
		{
			if (pFeature->GetName() == pPart->GetHistoryFeature(i)->GetName())
			{
				// �ش� Ư¡������ �ֱٿ� �����Ǿ����� �ǳʶ�
				if (pPart->GetHistoryFeature(i)->IsDeleted())
					break;
				// ���� �ֱٿ� ����, ���� �� �������� ����
				else
					return pPart->CopyFeature(pPart->GetHistoryFeature(i));
			}
		}
	}

	return NULL;
}

// Ư¡������ �����ϴ� �Լ�. ���ο��� DeleteFeature �Լ��� ȣ����
void Manipulation::Delete(char * command, Part * pPart)
{
	string token;
	
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(pPart->GetFeatureByName(token) == NULL && pPart->GetCustomFeatureByName(token) == NULL, "No such a feature!");

	// Ŀ���� ������ ��� �����ϰ� ��������
	if (pPart->GetCustomFeatureByName(token))
	{
		pPart->EraseCustomFeature(pPart->GetCustomFeatureByName(token)->GetOrder());
		return;
	}

	// �Ϲ����� ������ ����
	pPart->CheckCurrentState();
	
	Feature * pFeature = pPart->CopyFeature(pPart->GetFeatureByName(token));
	
	try
	{
		pFeature->SetDeleted(true);
		DeleteFeature(token, pPart);
		pPart->SetHistoryFeature(pFeature);

		pPart->GetPartDocumentPtr()->Update(); // ������Ʈ
	}
	catch (TSIArgumentException & e)
	{
		cout << e.GetMessageW() << endl;
		pPart->SetUpdateCount(pPart->GetUpdateCount() - 1);
	}
	//
}

// �ش� Ư¡����� �ڽ� Ư¡������ ��� �����ϴ� �Լ�
void Manipulation::DeleteFeature(string name, Part * pPart)
{
	vector<string> descendants;
	GetDescendants(name, descendants, pPart);
	
	// �ش� Ư¡���� ���� ��, ù ��° ������ ����(-) Ư¡������ ����� ��� �������� ����
	for (int i = 0; i < pPart->GetFeatureListSize(); ++i)
	{
		int flag = 0;
		int type = pPart->GetFeature(i)->GetType();

		for (int j = 0; j < (int)descendants.size(); ++j)
		{
			if (pPart->GetFeature(i)->GetName() == descendants[j])
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
			continue;
		else if (type == 0)
			continue;
		else if (flag == 0 && (type == 2 || type == 5 || type == 8 || type == 13 || type == 14 || type == 15))
			TSIThrowExceptionIf<TSIArgumentException>(flag == 0, "You cannot delete this feature. Please reconsider your operation!");
		else
			break;
	}
	
	// �ش� Ư¡����� �ڽ� Ư¡������ ��� ����
	for (int i = 0; i < (int)descendants.size(); ++i)
	{
		for (int j = 0; j < pPart->GetFeatureListSize(); ++j)
		{
			if (pPart->GetFeature(j)->GetName() == descendants[i])
			{
				pPart->EraseFeature(j);
				pPart->GetFeaturesPtr()->DeleteByName(descendants[i].c_str());
				break;
			}
		}
	}
}

// �ش� Ư¡����� �ڽ� Ư¡���� ����� �������� �Լ�. ����� ȣ��
void Manipulation::GetDescendants(string name, vector<string> & descendants, Part * pPart)
{
	for (int i = 0; i < pPart->GetFeatureListSize(); ++i)
	{
		if (pPart->GetFeature(i)->IsChildOf(name))
			GetDescendants(pPart->GetFeature(i)->GetName(), descendants, pPart);
	}

	descendants.push_back(name);
}