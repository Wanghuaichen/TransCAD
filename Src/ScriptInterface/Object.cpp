#include "stdafx.h"
#include "Object.h"

Object::Object(int type)
{
	SetType(type);
	SetModified(false);
	SetDeleted(false);
}

Object::~Object(void)
{
}

// �Է� ������ �߸��Ǿ����� �Ǻ�
bool Object::CheckValid(string token)
{
	bool isValid = false;
	
	if (token != "FAIL")
		isValid = true;

	return isValid;
}