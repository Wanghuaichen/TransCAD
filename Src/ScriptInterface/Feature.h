#pragma once
#include "TransCADScript.h"
#include "Object.h"
#include "Part.h"
#include "Reference.h"
#include "TSIExceptionTest.h"
#include "TSIArgumentException.h"


class Feature : public Object
{
public:
	Feature(Part * pPart, int featureType);
	virtual ~Feature(void);

	virtual void AddInfo(TransCAD::IFeaturePtr spFeature) {}	// TransCAD�κ��� ���� ����
	virtual void Create(void) {}								// ������ �����ϴ� ���, Ư¡���� ����
	virtual void Modify(char * command) {}						// ��ɾ�κ��� ���� ����
	
	void Restore(void);

	bool CheckExistence(string name);
	bool IsChildOf(string name);
	bool IsAncestorAvailable(void);
	
	Reference * CopyReference(Reference * pReference);
	void CopyBasicInformation(Feature & pFeature);

	VARIABLE_GET_AND_SET_FUNC_IMPL(TransCAD::IReferencePtr, ReferencePtr, m_spReference);
	VARIABLE_GET_AND_SET_FUNC_IMPL(TransCAD::IReferencesPtr, ReferencesPtr, m_spReferences);
	VARIABLE_GET_AND_SET_FUNC_IMPL(int, Order, m_order);
	VARIABLE_GET_AND_SET_FUNC_IMPL(int, Depth, m_depth);
	int GetOriginalOrder(void);

	VARIABLE_GET_AND_SET_FUNC_IMPL(Part *, Part, m_pPart);
	VARIABLE_GET_AND_SET_FUNC_IMPL(Reference *, Reference, m_pReference);
	void AddReference(TransCAD::IReferencePtr spReference);
	void AddReference(TransCAD::IReferencesPtr spReferences);

	LIST_GET_AND_SET_FUNC_IMPL(string, ParentName, m_parentNames);

private:
	TransCAD::IReferencePtr m_spReference;
	TransCAD::IReferencesPtr m_spReferences;
	Part *	m_pPart;						// ��Ʈ ������
	Reference * m_pReference;				// ���۷��� ������
	vector<string> m_parentNames;			// Ư¡������ �θ� Ư¡���� �̸�
	int m_order;							// Ư¡������ �𵨸� ����
	int m_depth;
};