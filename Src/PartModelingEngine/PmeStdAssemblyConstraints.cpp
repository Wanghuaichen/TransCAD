#include "StdAfx.h"
#include ".\pmestdassemblyconstraints.h"
#include ".\PmeStdAssemblyConstraint.h"

PME_IMPLEMENT_RUNTIME_TYPE(PmeStdAssemblyConstraints, PmeObject)

PmeStdAssemblyConstraints::PmeStdAssemblyConstraints(void)
{
}

PmeStdAssemblyConstraints::~PmeStdAssemblyConstraints(void)
{
}

void PmeStdAssemblyConstraints::Add( PmeStdAssemblyConstraint * pConstraint )
{
	SizeType index = Find( pConstraint );

	// BaseList�� �Ű������� ���� constraint�� ������ -1 ����
	if ( index == -1 )	
	{
		BaseList::Add( pConstraint );
	}

}

PmeStdAssemblyConstraint * PmeStdAssemblyConstraints::FindByName( const CString & name ) const
{
	SizeType size = GetSize();	// SizeType = int

	for( SizeType i = 0; i < size; ++ i )
	{
		PmeStdAssemblyConstraint * pConstraint = GetItem( i );
		if( pConstraint->GetName() == name )
			return pConstraint;
	}

	return 0;
}
