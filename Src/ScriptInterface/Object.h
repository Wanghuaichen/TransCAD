#pragma once
#include "TransCADScript.h"

// �� ��ܿ� �����ϴ� Ŭ����. Feature, SketchItem, Reference Ŭ�������� Object�� ��ӹ���
class Object
{
public:
	Object(int type);
	virtual ~Object(void);

	bool CheckValid(string token);

	VARIABLE_IS_AND_SET_FUNC_IMPL(bool, Modified, m_isModified);
	VARIABLE_IS_AND_SET_FUNC_IMPL(bool, Deleted, m_isDeleted);

	VARIABLE_GET_AND_SET_FUNC_IMPL(string, Name, m_name);
	VARIABLE_GET_AND_SET_FUNC_IMPL(int, Type, m_type);

	virtual void GetInfo(char * command) {}	// ��ɾ� ����
	virtual void AskInfo(void) {}			// ���� ���
	virtual void Restore(void) {}			// ����
	virtual void Help(void) {}		// ����

	string token;

private:
	string	m_name;		// ��ü �̸�
	int m_type;			// ��ü Ÿ��
	bool m_isModified;	// modify ����
	bool m_isDeleted;	// delete ����
};