#include "stdafx.h"
#include "Information.h"
#include "Feature.h"

// ������ ������ �Լ�
void Information::Ask(char * command, Part * pPart)
{
	string token;
	
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
	
	CMD::SetColor(D_BLUE, SKYBLUE); // cmd ���� ����(���:�Ķ�, ����:���� ��ī�̺��)

	if (token == "all" || token == "���")
	{
		for (int i = 0; i < pPart->GetFeatureListSize(); ++i)
			pPart->GetFeature(i)->AskInfo();
	}
	else if (token == "history" || token == "�����丮")
	{
		for (int i = 0; i < pPart->GetHistoryFeatureListSize() - pPart->GetUndoCount() + pPart->GetRedoCount(); ++i)
			pPart->GetHistoryFeature(i)->AskInfo();
	}
	else if (pPart->GetFeatureByName(token) != NULL)
		pPart->GetFeatureByName(token)->AskInfo();

	CMD::SetColor(D_BLUE, YELLOW);
}

// �θ� Ư¡���� ������ ����ϴ� �Լ�
void Information::Parent(char * command, Part * pPart)
{
	string token;
	
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(pPart->GetFeatureByName(token) == NULL, "No such a feature!");
	
	CMD::SetColor(D_BLUE, SKYBLUE); // cmd ���� ����(���:�Ķ�, ����:���� ��ī�̺��)

	for (int i = 0; i < pPart->GetFeatureByName(token)->GetParentNameListSize(); ++i)
	{
		string parent = pPart->GetFeatureByName(token)->GetParentName(i);
		cout << "Parent : " << parent << endl;
	}

	CMD::SetColor(D_BLUE, YELLOW);
}

// �ڽ� Ư¡���� ������ ����ϴ� �Լ�
void Information::Children(char * command, Part * pPart)
{
	string token;
	
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(pPart->GetFeatureByName(token) == NULL && token != "XYPlane" && token != "YZPlane" && token != "ZXPlane", "No such a feature!");
	
	int count = 0;

	for (int i = 0; i < pPart->GetFeatureListSize(); ++i)
	{
		if (pPart->GetFeature(i)->IsChildOf(token))
			count ++;
	}
	
	TSIThrowExceptionIf<TSIArgumentException>(count == 0, "No children!");

	CMD::SetColor(D_BLUE, SKYBLUE); // cmd ���� ����(���:�Ķ�, ����:���� ��ī�̺��)

	cout << token;
		GetChildren(token, 0, pPart);
	cout << endl;

	CMD::SetColor(D_BLUE, YELLOW);
}

// �ڽ� Ư¡���� ������ ����ϴ� �Լ�. ����� ȣ��
void Information::GetChildren(string parentName, int parentDepth, Part * pPart)
{
	string temp;
	
	for (int i = 0; i < pPart->GetFeatureListSize(); ++i)
	{
		if (pPart->GetFeature(i)->IsChildOf(parentName))
		{
			temp = "\n";
				
			for (int j = 0; j < parentDepth + 1; ++j)
				temp = temp + "	";
				
			cout << temp << pPart->GetFeature(i)->GetName();

			GetChildren(pPart->GetFeature(i)->GetName(), parentDepth + 1, pPart);
		}
	}
}

// �ش� Ư¡������ GUI �󿡼� �����̸� ���̶���Ʈ �ϴ� �Լ�
void Information::Highlight(char * command, Part * pPart)
{
	string token;
	
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(pPart->GetFeatureByName(token) == NULL, "No such a feature!");

	for (int i = pPart->GetFeatureListSize() - 1;i >= pPart->GetFeatureByName(token)->GetOrder(); --i)
		pPart->GetFeaturesPtr()->DeleteByName(pPart->GetFeature(i)->GetName().c_str());

	pPart->GetPartDocumentPtr()->Update(); // ������Ʈ

	for (int i = 0; i < 5; ++i)
	{
		pPart->GetFeatureByName(token)->Create();
		Sleep(300);

		pPart->GetFeaturesPtr()->DeleteByName(token.c_str());
		pPart->GetPartDocumentPtr()->Update(); // ������Ʈ
		Sleep(300);
	}

	for (int i = pPart->GetFeatureByName(token)->GetOrder();i < pPart->GetFeatureListSize(); ++i)
		pPart->GetFeature(i)->Create();

	pPart->GetPartDocumentPtr()->Update(); // ������Ʈ
}
