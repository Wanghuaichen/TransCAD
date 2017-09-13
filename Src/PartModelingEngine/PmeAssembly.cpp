#include "StdAfx.h"
#include <algorithm>
#include "PmeAssembly.h"
#include "PmePart.h"
#include "PmeComponent.h"
#include "PmeAssemblyComponentType.h"
#include "PmeStdAssemblyConstraints.h"

PME_IMPLEMENT_RUNTIME_TYPE( PmeAssembly, PmeObject )

PmeAssembly::PmeAssembly(void)
{
	PmePart * pPart = new PmePart();

	pPart->SetName( "Default Datum planes" );

	PmeComponent * pComp = new PmeComponent();

	pComp->SetName( "Default SubAssembly") ;

	pComp->AddPart( pPart );

	pComp->SetCompType( PmeAssemblyComponentType_Component );

	AddComponent( pComp );

	m_pConstraints = new PmeStdAssemblyConstraints();

	SetName(_T("Assembly"));
}

void ReleaseComponent( PmeComponent * pComponent )
{
	if( pComponent )
	{
		delete pComponent;
		pComponent = 0;
	}
}

PmeAssembly::~PmeAssembly(void)
{
	// Components�� BaseList���� ���� ��
	// vectorŸ���� BaseList�� clear() �Լ��� �̿��Ͽ� ����
	m_components.clear();

	// m_pConstraints�� class�� ����, �����ڿ��� new�� ���� ��
	// ����, delete�� �̿��Ͽ� ����
	ASSERT(m_pConstraints);
	delete m_pConstraints;
}


void PmeAssembly::AddComponent( PmeComponent * pComponent )
{
	m_components.push_back( pComponent );
}

void PmeAssembly::UpdateAll(void)
{
	for each( PmeComponent * pComp in m_components )
	{
		
		pComp->UpdateAll();
	}
}