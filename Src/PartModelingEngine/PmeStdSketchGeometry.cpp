#include "StdAfx.h"
#include ".\PmeStdSketchGeometry.h"
#include ".\PmeStdSketchFeature.h"
#include ".\PmeStdSketchGeometries.h"
#include ".\PmeArgumentException.h"

PME_IMPLEMENT_RUNTIME_TYPE(PmeStdSketchGeometry, PmeObject)

PmeStdSketchGeometry::PmeStdSketchGeometry(PmeStdSketchFeature * pSketchFeature)
: m_pSketchFeature(pSketchFeature)
{
	// GiveDefaultName();
}

PmeStdSketchGeometry::PmeStdSketchGeometry(PmeStdSketchFeature * pSketchFeature, const CString & name)
: m_pSketchFeature(pSketchFeature)
{
	SetName(name);
}

PmeStdSketchGeometry::~PmeStdSketchGeometry(void)
{
}

void PmeStdSketchGeometry::SetName(const CString & name)
{
	if(!CheckName(name))
		throw PmeArgumentException(_T("������ ����ġ �ȿ� ���� �̸��� ���� ������ �����մϴ�."));

	m_name = name;
}

void PmeStdSketchGeometry::GiveDefaultName(void)
{
	PmeStdSketchGeometries::SizeType size = GetSketchFeature()->GetGeometries()->GetSize();
	CString className = GetRuntimeType()->ClassName();
	className.Delete(0, 3);

	do
	{
        m_name.Format(_T("%s%d"), className, ++ size);
	} while(!CheckName(m_name));
}

bool PmeStdSketchGeometry::CheckName(const CString & name) const
{
	PmeStdSketchGeometries * pGeometries = GetSketchFeature()->GetGeometries();
	
	return pGeometries->FindByName(name) == NULL;
}