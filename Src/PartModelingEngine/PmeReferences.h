#pragma once

#include ".\PmeObject.h"
#include ".\PmeBaseList.h"

class PmeReference;

class PmeReferences
	: public PmeObject
	, public PmeBaseList<PmeReference *>
{
	typedef PmeBaseList<PmeReference *> BaseList;
	PME_DECLARE_RUNTIME_TYPE(PmeReferences)
public:
	PmeReferences(void);
	virtual ~PmeReferences(void);

	SizeType FindByName(const CString & name) const;

	ENTITY_LIST CreateEntityList(void) const;
	
	// Fillet�� Chamfer ����
	// Face�� ���۷����� �� �ִ� ��츦 ���
	ENTITY_LIST CreateEdgeList(void) const;

	PmeReferences * Clone(void) const;
};