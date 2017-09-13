// StdDefaultDatumPlaneFeatureAuto.h : CStdDefaultDatumPlaneFeatureAuto�� �����Դϴ�.

#pragma once
#include "resource.h"       // �� ��ȣ�Դϴ�.

#include "TransCAD.h"
#include ".\DispatchImplEx.h"
#include ".\FeatureImpl.h"

typedef IDispatchImplEx<IStdDefaultDatumPlaneFeature, &IID_IStdDefaultDatumPlaneFeature, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0> IStdDefaultDatumPlaneFeatureType;

// CStdDefaultDatumPlaneFeatureAuto

class ATL_NO_VTABLE CStdDefaultDatumPlaneFeatureAuto : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IFeatureImpl<IStdDefaultDatumPlaneFeatureType>
{
public:
	CStdDefaultDatumPlaneFeatureAuto()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_STDDEFAULTDATUMPLANEFEATUREAUTO)


BEGIN_COM_MAP(CStdDefaultDatumPlaneFeatureAuto)
	COM_INTERFACE_ENTRY(IStdDefaultDatumPlaneFeature)
	COM_INTERFACE_ENTRY(IFeature)
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

};

// OBJECT_ENTRY_AUTO(__uuidof(StdDefaultDatumPlaneFeature), CStdDefaultDatumPlaneFeatureAuto)
