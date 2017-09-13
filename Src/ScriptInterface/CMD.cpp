#include "stdafx.h"
#include "CMD.h"

void CMD::SetColor(int backcolor, int fontcolor)
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backcolor*16 + fontcolor);
}

void CMD::Clear(void)
{
	system("cls"); // cmd â ����

	CMD::SetColor(D_BLUE, WHITE); // cmd ���� ����(���:�Ķ�, ����:�Ͼ��)
	cout << "[TransCAD Script Interface 1.0]" << endl;
	cout << " Please enter 'help' or '����' to see the available functions." << endl;
	CMD::SetColor(D_BLUE, YELLOW); // cmd ���� ����(���:�Ķ�, ����:�����)
}

void CMD::SetTitle(wstring title, int i)
{
	for (int j = 0; j < i/3; ++j)
		title = title + TEXT(".");
	
	SetConsoleTitle(title.c_str());
}