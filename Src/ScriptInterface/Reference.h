#pragma once
#include "TransCADScript.h"
#include "Part.h"
#include "Feature.h"
#include "Object.h"

class Feature;

class Reference : public Object
{
public:
	Reference(Feature * pFeature, int referenceType);
	virtual ~Reference(void);
	
	virtual void AddInfo(TransCAD::IReferencePtr spReference) {}
	virtual void AddInfo(TransCAD::IReferencesPtr spReferences) {}

	LIST_GET_AND_SET_FUNC_IMPL(string, TargetFeature, m_targetFeatures);
	LIST_GET_AND_SET_FUNC_IMPL(string, ReferenceName, m_referenceNames);

	VARIABLE_GET_AND_SET_FUNC_IMPL(Feature *, Feature, m_pFeature);
	VARIABLE_GET_AND_SET_FUNC_IMPL(TransCAD::IReferencePtr, ReferencePtr, m_spReference);
	VARIABLE_GET_AND_SET_FUNC_IMPL(TransCAD::IReferencesPtr, ReferencesPtr, m_spReferences);
	
	void SetDepth(void);

private:
	Feature * m_pFeature;
	TransCAD::IReferencePtr m_spReference;
	TransCAD::IReferencesPtr m_spReferences;
	vector<string> m_referenceNames; // ���۷����� �̸��� ����. �� �� ���� �� ���
	vector<string> m_targetFeatures; // Ÿ�� Ư¡������ �̸��� ����
};