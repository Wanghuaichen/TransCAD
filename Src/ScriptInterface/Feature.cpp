#include "stdafx.h"
#include "Feature.h"

#include "ReferenceExplicitModelObject.h"
#include "ReferenceBrep.h"
#include "ReferenceFeature.h"

Feature::Feature(Part * pPart, int featureType)
	:Object(featureType)
{
	SetPart(pPart);
	SetReference(NULL);
}

Feature::~Feature(void)
{
	delete m_pReference;
}

// �Է� �� �̸��� Ư¡������ ���� ���� �Ǻ�
bool Feature::CheckExistence(string name)
{
	if (GetPart()->GetFeatureByName(name))
		return false;
	else
		return true;
}

// �Է� Ư¡������ �θ����� �Ǻ�
bool Feature::IsChildOf(string name)
{
	for (int i = 0; i < GetParentNameListSize(); ++i)
	{
		if (GetParentName(i) == name)
			return true;
	}

	return false;
}

// �θ� Ư¡������ ���� �� �� �����ϴ��� �Ǻ�
bool Feature::IsAncestorAvailable()
{
	int count = 0;

	// �θ� ���İ� ���� TransCAD�� �����Ǿ� �ִ��� �˻�
	for (int i = 0; i < GetParentNameListSize(); ++i)
	{
		if (GetPart()->GetFeatureByName(GetParentName(i)))
			count++;
		else
		{
			// �θ� ��ǥ����� ��쿡�� OK
			if (GetParentName(i) == "XYPlane"
				|| GetParentName(i) == "YZPlane"
				|| GetParentName(i) == "ZXPlane"
				|| GetParentName(i) == "N/A")
				count++;
			else
				continue;
		}
	}

	// ��� �θ� �����Ǿ� �ִ� ���
	if (count == GetParentNameListSize())
		return true;
	else
		return false;
}

// �ʱ� �𵨸� ���� ����
int Feature::GetOriginalOrder(void)
{
	int _originalOrder = 0;

	// ���� �̸��� Ư¡������ ���� �� �ٽ� ������ ���, ���߿� ���� Ư¡������ Order�� �����ؾ� �Ѵ�.
	int _CreateCnt = 0;
	int _DeleteCnt = 0;
	int _ModifyCnt = 0;

	for (int i = 0; i < GetPart()->GetCurrentState(); ++i)
	{
		if (GetName() == GetPart()->GetHistoryFeature(i)->GetName())
		{
			if (GetPart()->GetHistoryFeature(i)->IsModified())
				_ModifyCnt++;
			else if (GetPart()->GetHistoryFeature(i)->IsDeleted())
				_DeleteCnt++;
			else
				_CreateCnt++;
		}
	}

	// �� �� �̻� ���� �Ǿ�����, ���� �� Ƚ������ ���� ���� �� ���
	if (_DeleteCnt >= 1 && _CreateCnt > _DeleteCnt)
	{
		// �ڿ������� �˻��ؼ� ���� �̸��� ������, �� ó�� ������ Ư¡������ ������ ����
		for (int i = GetPart()->GetCurrentState() - 1; i > 0; --i)
		{
			if (GetName() == GetPart()->GetHistoryFeature(i)->GetName()
				&& !GetPart()->GetHistoryFeature(i)->IsModified()
				&& !GetPart()->GetHistoryFeature(i)->IsDeleted())
			{
				_originalOrder = GetPart()->GetHistoryFeature(i)->GetOrder();
				break;
			}
		}
	}
	else
	{
		// �տ������� �˻��ؼ� ���� �̸��� ������, �� ó�� ������ Ư¡������ ������ ����
		for (int i = 0; i < GetPart()->GetCurrentState(); ++i)
		{
			if (GetName() == GetPart()->GetHistoryFeature(i)->GetName()
				&& !GetPart()->GetHistoryFeature(i)->IsModified()
				&& !GetPart()->GetHistoryFeature(i)->IsDeleted())
			{
				_originalOrder = GetPart()->GetHistoryFeature(i)->GetOrder();
				break;
			}
		}
	}

	return _originalOrder;
}

// Reference�� ����
void Feature::Restore(void)
{
	if (GetReference())
		GetReference()->Restore();
}

// Reference�� ReferencePtr�߰�. ������ Ư¡���󿡼� ȣ���
void Feature::AddReference(TransCAD::IReferencePtr spReference)
{
	Reference * pReference = 0;

	switch(spReference->GetType())
	{
	case TransCAD::ExplicitModelObject:
		pReference = new ReferenceExplicitModelObject(this, 0);
		break;
	case TransCAD::Brep:
		pReference = new ReferenceBrep(this, 1);
		break;
	case TransCAD::Feature:
		pReference = new ReferenceFeature(this, 6);
		break;
	}
	
	if (pReference)
	{
		pReference->AddInfo(spReference);
		pReference->SetDepth();
		SetReference(pReference);
	}
}

// Reference�� ReferencesPtr�߰�. ������ Ư¡���󿡼� ȣ���
void Feature::AddReference(TransCAD::IReferencesPtr spReferences)
{
	Reference * pReference = 0;
	
	m_spReference = spReferences->GetItem(1);

	switch(m_spReference->GetType())
	{
	case TransCAD::ExplicitModelObject:
		pReference = new ReferenceExplicitModelObject(this, 0);
		break;
	case TransCAD::Brep:
		pReference = new ReferenceBrep(this, 2);
		break;
	case TransCAD::Feature:
		pReference = new ReferenceFeature(this, 7);
		break;
	}

	if (pReference)
	{
		pReference->AddInfo(spReferences);
		pReference->SetDepth();
		SetReference(pReference);
	}
}

// �⺻ ���� ����
void Feature::CopyBasicInformation(Feature & pFeature)
{
	SetName(pFeature.GetName());
	SetOrder(pFeature.GetOrder());
	SetDepth(pFeature.GetDepth());
	SetModified(pFeature.IsModified());
	SetDeleted(pFeature.IsDeleted());

	if (pFeature.GetReference())
		SetReference(CopyReference(pFeature.GetReference()));
	
	m_parentNames = pFeature.m_parentNames;
}

// ���۷��� ����
Reference * Feature::CopyReference(Reference * pReference)
{
	Reference * pCopiedReference = 0;
	
	if (pReference->GetType() == 0)
		pCopiedReference = new ReferenceExplicitModelObject(*(ReferenceExplicitModelObject*)pReference);
	else if (pReference->GetType() == 6 || pReference->GetType() == 7)
		pCopiedReference = new ReferenceFeature(*(ReferenceFeature*)pReference);
	else
		pCopiedReference = new ReferenceBrep(*(ReferenceBrep*)pReference);
	
	pCopiedReference->SetFeature(this);

	return pCopiedReference;
}
