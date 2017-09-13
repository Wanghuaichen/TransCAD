#include "StdAfx.h"
#include ".\pmefeature.h"
#include ".\PmePart.h"
#include ".\PmeFeatures.h"
#include ".\PmeArgumentException.h"


PME_IMPLEMENT_RUNTIME_TYPE(PmeFeature, PmeObject)

PmeFeature::PmeFeature(PmePart * pPart)
: m_pPart(pPart)
, m_name(_T(""))
{
}

PmeFeature::PmeFeature(PmePart * pPart, const CString & name)
: m_pPart(pPart)
{
	SetName(name);
}

PmeFeature::~PmeFeature(void)
{
}

void PmeFeature::Update(void)
{
}

void PmeFeature::SetName(const CString & name)
{
	if(!CheckName(name))
		throw PmeArgumentException(_T("���� �̸��� ���� Ư¡ ������ �����մϴ�."));

	m_name = name;
}

void PmeFeature::GiveDefaultName(void)
{
	PmeFeatures::SizeType size = GetPart()->GetFeatures()->GetSize();
	CString className = GetRuntimeType()->ClassName();
	className.Delete(0, 3);

	do
	{
        m_name.Format(_T("%s%d"), className, ++ size);
	} while(!CheckName(m_name));
}

bool PmeFeature::CheckName(const CString & name) const
{
	PmeFeatures * pFeatures = GetPart()->GetFeatures();
	return pFeatures->FindByName(name) == NULL;
}

int PmeFeature::GetOrder(void)
{
	PmeFeatures * pFeatures = GetPart()->GetFeatures();

	for (int i = 0; pFeatures->GetSize(); ++i)
	{
		if (pFeatures->GetItem(i)->GetName() == GetName())
			return i;
	}

	return 0;
}

void PmeFeature::AttachFeatureTag(BODY * pBody)
{
	PmeFeatureTagMarker::Clear(pBody);
	PmeFeatureTagMarker::Attach(pBody, this);
}

void PmeFeature::AttachFeatureTagToNewFaces(BODY * pBody)
{
	ENTITY_LIST faces;
	api_get_faces(pBody, faces);

	faces.init();
	while(ENTITY * pEntity = faces.next())
	{
		FACE * pFace = static_cast<FACE *>(pEntity);
		ATTRIB_GEN_NAME * pAttr = find_named_attrib(pFace, "FEATURE");

		if (pAttr == NULL)
			PmeFeatureTagMarker::Attach(pFace, this);
	}
}

// 16-12-08 �Ǽ���
void PmeFeature::SetParentName(PmeReference * pReference)
{
	m_parentNames.clear();
	
	if (pReference->GetReferenceType() == PmeReferenceType_Brep)
		GetTargetFeaturesFromBrepName(pReference->GetReferenceeName());
	else
		m_parentNames.push_back(pReference->GetReferenceeName());
}

// 16-12-08 �Ǽ���
void PmeFeature::SetParentName(PmeReferences * pReferences)
{
	m_parentNames.clear();
	
	for (int i = 0; i < pReferences->GetSize(); ++i)
	{
		PmeReference * pReference = pReferences->GetItem(i);
		
		if (pReference->GetReferenceType() == PmeReferenceType_Brep)
			GetTargetFeaturesFromBrepName(pReference->GetReferenceeName());
		else
			m_parentNames.push_back(pReference->GetReferenceeName());
	}
}

// Face Ȥ�� Edge �̸����κ��� �ش� ��Ҹ� �����ϴ� Ư¡���� �̸��� ���� (16-12-08 �Ǽ���)
void PmeFeature::GetTargetFeaturesFromBrepName(CString brepName)
{
	if (brepName.Find(_T("#")) != -1) // Edge
	{
		CString faceName1 = brepName.Left(brepName.Find(_T("#")));
		CString faceName2 = brepName.Right(brepName.GetLength() - brepName.Find(_T("#")) - 1);

		GetTargetFeaturesFromFaceName(faceName1);
		GetTargetFeaturesFromFaceName(faceName2);
	}
	else // Face
	{
		GetTargetFeaturesFromFaceName(brepName);
	}
}

// Face �̸����κ��� �ش� ��Ҹ� �����ϴ� Ư¡���� �̸��� ���� (16-12-08 �Ǽ���)
void PmeFeature::GetTargetFeaturesFromFaceName(CString faceName)
{
	CString temp = faceName;
	CString featureName;

	// Merge �� ���� �ִ� ������ ���
	while (temp != _T("0")	&& temp != _T("0}"))
	{
		featureName = temp.Left(temp.Find(_T(",")));
		
		// �̹� �����ϸ� �߰����� ����
		int count = 0;
		
		for (int i = 0; i < (int)m_parentNames.size(); ++i)
		{
			if (m_parentNames[i] == featureName)
				count++;
		}

		if (count == 0)
			m_parentNames.push_back(featureName);

		if (temp.Find(_T(";")) == -1)
			break;
		else
			temp = temp.Right(temp.GetLength() - temp.Find(_T(";")) - 1);
	}
}