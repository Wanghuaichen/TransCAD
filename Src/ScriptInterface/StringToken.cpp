#include "stdafx.h"
#include "StringToken.h"

// �Է¹��� buffer Ȥ�� command�� ��ȿ���� �˻�. ��ȿ���� ���� ��� FAIL ���ڿ��� ����
string StringToken::GetString (char * buffer, const char * separater, char *& command)
{
	string temp;
	
	// buffer�� �ִ� ���. ��, �� ó�� �о��� �� ����
	if (buffer != NULL && buffer[0] != NULL)
	{
		temp = strtok_s( buffer, separater, &command );
	}
	// command ���� NULL �� �ƴ� ���. �Ϲ����� ��� ����
	else if (command != NULL)
	{
		string blank = " ";
		string blanks = "";

		// ���� ���ڿ� �Ǵ�
		for (int i = 0; i < 100; ++i)
		{
			char * check = (char *)blanks.c_str();

			if (*command == *check)
			{
				temp = "FAIL";
				return temp;
			}

			blanks = blanks + blank;
		}
		
		// ������ �ƴ� ���
		temp = strtok_s( buffer, separater, &command );
	}
	else
	{
		// ��ȿ���� ���� ���
		temp = "FAIL";
	}

	return temp;
}