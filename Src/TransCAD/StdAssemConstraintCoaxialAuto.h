// StdAssemConstraintCoaxialAuto.h : CStdAssemConstraintCoaxialAuto�� �����Դϴ�.

#pragma once
#include "resource.h"       // �� ��ȣ�Դϴ�.
#include "TransCAD.h"
#include ".\DispatchImplEx.h"
#include ".\StdAssemConstraintImpl.h"

typedef IDispatchImplEx<IStdAssemConstraintCoaxial, &IID_IStdAssemConstraintCoaxial, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0> IStdAssemConstraintCoaxialType;

// CStdAssemConstraintCoaxialAuto

class ATL_NO_VTABLE CStdAssemConstraintCoaxialAuto :
	public CComObjectRootEx<CComSingleThreadModel>,
	//public CComCoClass<CStdAssemConstraintCoaxialAuto, &CLSID_StdAssemConstraintCoaxial>,
	//public IDispatchImpl<IStdAssemConstraintCoaxial, &IID_IStdAssemConstraintCoaxial, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0>
	public IStdAssemConstraintImpl<IStdAssemConstraintCoaxialType>
{
public:
	CStdAssemConstraintCoaxialAuto()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_STDASSEMCONSTRAINTCOAXIAL)


BEGIN_COM_MAP(CStdAssemConstraintCoaxialAuto)
	COM_INTERFACE_ENTRY(IStdAssemConstraintCoaxial)
	COM_INTERFACE_ENTRY(IStdAssemConstraint)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
		ReleaseDispatchImplEx();
	}

public:
	STDMETHOD(get_ConstrainedPart)( IPart** ppVal);
	STDMETHOD(get_ConstrainedGeometry)( IReference** ppVal );
	STDMETHOD(get_ReferencePart)( IPart** ppVal );
	STDMETHOD(get_ReferenceGeometry)( IReference** ppVal );


};

//OBJECT_ENTRY_AUTO(__uuidof(StdAssemConstraintCoaxial), CStdAssemConstraintCoaxialAuto)
