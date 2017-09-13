#include "stdafx.h"
#include "CustomFeature.h"

CustomFeature::CustomFeature(Part * pPart)
{
	m_pPart = pPart;
}

CustomFeature::~CustomFeature(void)
{
}

void CustomFeature::Create(char * command)
{
	string token;
	char buffer[1000];
	char * context = NULL;

	// �Ķ���� ���� (ex. 'a', 'b', 'c' ��)
	while (token != "FAIL")
	{
		token = StringToken::GetString( NULL, seps_blank, command );
		
		if (token != "FAIL")
			m_params.push_back(token);

	}

	// ��� ��ɾ� ����
	while (token != "endcustom" && token != "Ŀ��������")
	{
		CMD::SetColor(D_BLUE, WHITE); // cmd ���� ����(���:�Ķ�, ����:�Ͼ��)
		
		cout << "> ";
		cin.getline(buffer, 1000);

		token = buffer;
		
		if(token != "endcustom" && token != "Ŀ��������")
			m_commands.push_back(token);

	}

	// Ŀ�������� ���� ����
	SetOrder(GetPart()->GetCustomFeatureListSize());
	Initialize();
}

void CustomFeature::Initialize(void)
{
	m_initParams = m_params;
	m_initCommands = m_commands;
}

void CustomFeature::Run(char * command)
{
	string token;

	try
	{
		// Input �Ķ���� ����
		while (token != "FAIL")
		{
			token = StringToken::GetString( NULL, seps_blank, command );
		
			if (token != "FAIL")
				m_inputParams.push_back(token);
		}
	
		// Input �Ķ���Ͱ� �����ϰų� ���� �ԷµǾ��� �� ��������
		if (m_inputParams.size() != m_params.size())
		{
			m_inputParams.clear();
			TSIThrowExceptionIf<TSIArgumentException>(m_inputParams.size() != m_params.size(), "Insufficient input parameters!");
		}

		// ��ɾ� ����
		for (int i = 0; i < (int)m_commands.size(); ++i)
		{
			// �Ķ���� ������ �ִ� ���
			if (m_commands[i].find("�Ķ����") != -1 || m_commands[i].find("parameter") != -1)
			{
				token = m_commands[i];
				AddParameter((char *)token.c_str());
				continue;
			}
		
			// �ش� �Ķ���͸� Input �Ķ���ͷ� ��ü
			for (int j = 0; j < (int)m_params.size(); ++j)
			{
				size_t pos = 0;
			
				while ((pos = m_commands[i].find(m_params[j])) != -1)
					m_commands[i].replace(pos, m_params[j].length(), m_inputParams[j]);
			}

			// ������ Ŀ���
			token = m_commands[i];

			// ���� ó��
			if (token.find("loop", 0) != -1)
			{
				ProcessLoop((char *)token.c_str(), i);
				continue;
			}

			// ���ǹ� ó��
			if (token.find("if", 0) != -1)
			{
				ProcessIf((char *)token.c_str(), i);
				continue;
			}

			// ����ġ�� �������� ��
			if (GetPart()->GetCurrentSketch())
				GetPart()->OnCreatingSketch((char *)token.c_str());
			// �� ���� ���۷����� ���� ���� ��
			else if (GetPart()->GetCurrentReference())
				GetPart()->OnSelectingReferences((char *)token.c_str());
			// �Ϲ����� ���
			else
				GetPart()->RunCommands((char *)token.c_str());
		}
	}
	catch (TSIArgumentException & e)
	{
		cout << e.GetMessageW() << endl;
	}

	// �ʱ�ȭ
	m_inputParams.clear();
	m_commands.clear();
	m_params.clear();
	m_commands = m_initCommands;
	m_params = m_initParams;
}

void CustomFeature::Help(void)
{
	cout << "customfeature " << GetName();

	for (int i = 0; i < (int)m_params.size(); ++i)
		cout << " " << m_params[i];

	cout << endl;

	for (int i = 0; i < (int)m_initCommands.size(); ++i)
		cout << m_initCommands[i] << endl;

	cout << "endcustom" << endl;
}

void CustomFeature::AddParameter(char * command)
{
	string token, temp;

	token = StringToken::GetString( NULL, " =", command );
	token = StringToken::GetString( NULL, " =", command );

	// �Ķ���� �̸� ���� (�º�)
	m_params.push_back(token);

	temp = StringToken::GetString( NULL, "=", command );

	TSIThrowExceptionIf<TSIArgumentException>(temp == "FAIL", "Invalid parameter definition!");

	// ���ο� �Ķ���� �� ��� (�캯)
	// �Է� �Ķ���� ������ ��Ģ������ ���� ���
	for (int i = 0; i < (int)m_params.size(); ++i)
	{
		size_t pos = 0;
			
		while ((pos = temp.find(m_params[i])) != -1)
		{
			// ������ ���(ex.-1 �� (0-1))�� ��ȯ
			if(atof(m_inputParams[i].c_str()) < 0)
			{
				token = "(0" + m_inputParams[i] + ")";
				temp.replace(pos, m_params[i].length(), token);
			}
			else
				temp.replace(pos, m_params[i].length(), m_inputParams[i]);
		}
	}

	token = StringCalc::GetPostFix(temp);			// ���� ǥ������� ��ȯ
	double result = StringCalc::Calculate(token);	// ���

	char buffer[500];
	sprintf_s(buffer, sizeof(buffer), "%f", result);
	//

	// �Ķ���� �� ����
	token = buffer;
	m_inputParams.push_back(token);
}

void CustomFeature::ProcessLoop(char * command, int & index)
{
	// Loop ó�� ��ƾ
	string token, param;
	string start, end;

	token = StringToken::GetString( NULL, seps_blank, command );
	
	token = StringToken::GetString( NULL, seps_blank, command );
	param = token;
	
	token = StringToken::GetString( NULL, seps_blank, command );
	start = token;
	
	token = StringToken::GetString( NULL, seps_blank, command );
	end = token;
	
	m_params.push_back(param);
	int paramPos = (int)m_params.size() - 1;
	
	string tempCommand;
	vector<string> tempCommands;
	index++;
	int indexif = index;
	int endif = index;

	while (m_commands[index] != "endloop")
	{
		tempCommands.push_back(m_commands[index]);
		index++;
	}
		
	//tempCommand = m_commands[index];
		
	for (int i = atoi(start.c_str()); i <= atoi(end.c_str()); ++i)
	{
		for (int j = 0; j < (int)tempCommands.size(); ++j)
		{
			indexif = index;
			
			size_t pos = 0;
			
			char str[128];
			_itoa_s(i, str, 10);
			token = str;

			if (i == atoi(start.c_str()))
				m_inputParams.push_back(token);
			else
				m_inputParams[paramPos].replace(0, token.length(), str);

			token = tempCommands[j];

			while ((pos = token.find(param)) != -1)
				token.replace(pos, param.length(), str);
			
			// ���ǹ� ó��
			if (token.find("if", 0) != -1)
			{
				ProcessIf((char *)token.c_str(), endif);
				j = j + endif - indexif;
				continue;
			}

			// ����ġ�� �������� ��
			if (GetPart()->GetCurrentSketch())
				GetPart()->OnCreatingSketch((char *)token.c_str());
			// �� ���� ���۷����� ���� ���� ��
			else if (GetPart()->GetCurrentReference())
				GetPart()->OnSelectingReferences((char *)token.c_str());
			// �Ϲ����� ���
			else
				GetPart()->RunCommands((char *)token.c_str());
		}

		if (endif != 0)
			index = endif;
		
		index++;
	}
}

void CustomFeature::ProcessIf(char * command, int & index)
{
	// If ó�� ��ƾ
	string token, param1, param2;
	vector<double> result;
	string condition;
	
	token = StringToken::GetString( NULL, seps_blank, command );
	
	token = StringToken::GetString( NULL, seps_blank, command );
	param1 = token;
	token = StringCalc::GetPostFix(param1);
	result.push_back(StringCalc::Calculate(token));	// ���

	token = StringToken::GetString( NULL, seps_blank, command );
	condition = token;
	
	token = StringToken::GetString( NULL, seps_blank, command );
	param2 = token;
	token = StringCalc::GetPostFix(param2);
	result.push_back(StringCalc::Calculate(token));	// ���

	bool isTrue = false;

	// ���ǹ� �Ǻ�
	if (condition == "==")
	{
		if (result[0] == result[1])
			isTrue = true;
	}
	else if  (condition == "!=")
	{
		if (result[0] != result[1])
			isTrue = true;
	}
	else if  (condition == ">")
	{
		if (result[0] > result[1])
			isTrue = true;
	}
	else if  (condition == "<")
	{
		if (result[0] < result[1])
			isTrue = true;
	}
	else if  (condition == ">=")
	{
		if (result[0] >= result[1])
			isTrue = true;
	}
	else if  (condition == "<=")
	{
		if (result[0] <= result[1])
			isTrue = true;
	}

	string tempCommand;
	index++;

	while (m_commands[index] != "endif")
	{
		tempCommand = m_commands[index];

		for (int i = 0; i < (int)m_params.size(); ++i)
		{
			size_t pos = 0;
			
			while ((pos = tempCommand.find(m_params[i])) != -1)
			{
				// ������ ���(ex.-1 �� (0-1))�� ��ȯ
				if(atof(m_inputParams[i].c_str()) < 0)
				{
					token = "(0" + m_inputParams[i] + ")";
					tempCommand.replace(pos, m_params[i].length(), token);
				}
				else
					tempCommand.replace(pos, m_params[i].length(), m_inputParams[i]);
			}
		}

		token = tempCommand;
		
		if (isTrue)
		{
			// ���� ó��
			if (token.find("loop", 0) != -1)
			{
				ProcessLoop((char *)token.c_str(), index);
				index++;
				continue;
			}
			
			// ����ġ�� �������� ��
			if (GetPart()->GetCurrentSketch())
				GetPart()->OnCreatingSketch((char *)token.c_str());
			// �� ���� ���۷����� ���� ���� ��
			else if (GetPart()->GetCurrentReference())
				GetPart()->OnSelectingReferences((char *)token.c_str());
			// �Ϲ����� ���
			else
				GetPart()->RunCommands((char *)token.c_str());
		}
		
		index++;
	}
}