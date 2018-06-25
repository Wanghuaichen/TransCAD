#include "StdAfx.h"
#include "PmeComponent.h"
#include "PmePartAPI.h"
#include "PmeHandleMacro.h"
#include "PmePart.h"
#include "PmeSolid.h"
#include "PmeExplicitModelObject.h"
#include "PmeExplicitModel.h"
#include ".\attr_pme_facename.h"

PME_IMPLEMENT_RUNTIME_TYPE( PmeComponent, PmeObject )

/**
 * PmeComponent class can contain components(= sub components) and parts
 */
PmeComponent::PmeComponent( PmePart * pPart )
{
	m_pParent = NULL;
	m_name = "NonamedComp";	
	m_compType = PmeAssemblyComponentType_Component;

	AddPart( pPart );
	isUpdated = TRUE;
}
PmeComponent::PmeComponent()
{
	m_pParent = NULL;
	m_name = "NonamedComp";
	m_compType = PmeAssemblyComponentType_Component;
	
	m_pPart = 0;
	isUpdated = TRUE;
}

PmeComponent::~PmeComponent(void)
{
	if( m_pPart )
	{
		PmeHPart hPart = PME_PART2HANDLE( m_pPart );
		PmePartAPI::Delete( hPart );
		m_pPart = 0;
	}
}

// Add functions
/**
 * @brief AddComponent Add component(= sub component) in the current component
 * @param pComp Component to be added
*/
void PmeComponent::AddComponent( PmeComponent * pComp )
{
	pComp->SetParentName( m_name );
	pComp->SetParent( this );
	m_components.push_back( pComp );

	isUpdated = TRUE;
}

/**
 * @brief AddPart Add part in the current component
 * @param pPart Part to be added
*/
void PmeComponent::AddPart( PmePart * pPart )
{
	pPart->SetParentName( m_name );
	m_components.push_back( pPart );
	UpdateAllFaceNames( pPart );

	isUpdated = TRUE;
}


// Get functions
/**
 * @brief GetSize Get size of all items(included components and parts) in the component
 */
int PmeComponent::GetSize( void )
{
	return m_components.size();
}

/**
 * @brief GetComponentSize Get size of sub component in the component
 */
int PmeComponent::GetComponentsSize( void )
{
	int i = 0;

	for each( PmeObject * pObj in m_components )
	{
		if( pObj->IsInstanceOf( PME_RUNTIME_TYPE( PmeComponent ) ))
		{
			i ++;
		}
	}
	return i;
}

/**
 * @brief GetPartSize Get size of part in the component
 */
int PmeComponent::GetPartsSize( void )
{
	int i = 0;

	for each( PmeObject * pObj in m_components )
	{
		if( pObj->IsInstanceOf( PME_RUNTIME_TYPE( PmePart ) ))
		{
			i ++;
		}
	}

	return i;
}

/**
 * @brief GetComponent Get component in the current components by using index
 * @param i index you want to find
 */
PmeComponent* PmeComponent::GetComponent( int i )
{
	
	if ( m_components[ i ]->IsInstanceOf( PME_RUNTIME_TYPE( PmeComponent ) ) )
	{
		return ( PmeComponent * )m_components[ i ];
	}

	ASSERT( 0 );
	return NULL;
}

/**
 * @brief GetPart Get part in the current components by using index
 * @param i index you want to find
 */
PmePart* PmeComponent::GetPart( int i )
{
	if ( m_components[ i ]->IsInstanceOf( PME_RUNTIME_TYPE( PmePart ) ) )
	{
		return ( PmePart * )m_components[ i ];
	}

	ASSERT( 0 );
	return NULL;
}

// Part�� ��� ���� �̸��� ������Ʈ. ������Ʈ ������ ���� (16-08-02 �Ǽ���)
/**
 * @brief UpdateAllFaceNames Update all face names of part including component name
 * @param pPart Part to be updated
 */
void PmeComponent::UpdateAllFaceNames( PmePart * pPart )
{
	PmeExplicitModelObject * pExpModObj = 0;
	PmeExplicitModel * pExpModel = pPart->GetExplicitModel();
	
	PmeSolid * pSolid = pExpModel->GetSolid();
	
	// Solid�� ���� ���� ����
	if ( pSolid )
	{
		BODY * pBody = pSolid->GetSolid();

		ENTITY_LIST faceList;
		api_get_faces( pBody, faceList );
		
		// �θ� ������Ʈ�� �̸��� �߰�
		PmeObject * pObject = GetParent();
		CString pParentName;

		while( pObject )
		{
			PmeComponent * pComp = static_cast<PmeComponent *>( pObject );
			pParentName = pComp->GetName() + "," + pParentName;
			pObject = pComp->GetParent();
		}

		// ���� ������Ʈ�� �̸��� ��Ʈ�� �̸��� �߰�
		pParentName = pParentName + GetName() + "," + pPart->GetName();

		// ��Ʈ�� �� ���� �̸��� ���� ���
		for (int i = 0; i < faceList.count(); ++i) 
		{
			FACE * pFace = (FACE *)faceList[ i ];
			ATTRIB_FACENAME * pAttrib = (ATTRIB_FACENAME *)find_attrib( pFace, ATTRIB_PME_TYPE, ATTRIB_FACENAME_TYPE );
			CString pfaceName = pAttrib->GetFaceName();
			
			pfaceName = pParentName + "," + pfaceName;
			new ATTRIB_FACENAME( pFace, pfaceName );
		}		
	}
}

/**
 * @brief UpdateAll Update all of part in the components
 */
void PmeComponent::UpdateAll()
{
	for each( PmeObject * pObj in m_components )
	{
		if( pObj->IsInstanceOf( PME_RUNTIME_TYPE( PmePart ) ) )
		{
			((PmePart *)pObj)->UpdateAll();
			
			// 17-03-28, constraint�� �ѹ� �����ϰ� ���� component�̸��� part�̸��� �����
			// ȭ�� ������Ʈ�� �� UpdateAllFaceNames�� �����Ͽ� �ذ�
			UpdateAllFaceNames( (PmePart *) pObj );
		}
		else
		{
			((PmeComponent *)pObj)->UpdateAll();
		}
	}

}

/**
 * @brief clear clear all of part in the components
 */
void PmeComponent::Clear()
{
	for each( PmeObject * pObj in m_components )
	{
		if( pObj->IsInstanceOf( PME_RUNTIME_TYPE( PmePart ) ) )
		{
			((PmePart *)pObj)->Clear();
		
		}
		else
		{
			((PmeComponent *) pObj)->Clear();
		}
	}
}

