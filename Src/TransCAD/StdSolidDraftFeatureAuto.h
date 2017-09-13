// StdSolidDraftFeatureAuto.h : CStdSolidDraftFeatureAuto�� �����Դϴ�.

#pragma once
#include "resource.h"       // �� ��ȣ�Դϴ�.

#include "TransCAD.h"
#include ".\DispatchImplEx.h"
#include ".\FeatureImpl.h"

typedef IDispatchImplEx<IStdSolidDraftFeature, &IID_IStdSolidDraftFeature, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0> IStdSolidDraftFeatureType;

// CStdSolidDraftFeatureAuto

class ATL_NO_VTABLE CStdSolidDraftFeatureAuto :
	public CComObjectRootEx<CComSingleThreadModel>,
	public IFeatureImpl<IStdSolidDraftFeatureType>
{
public:
	CStdSolidDraftFeatureAuto()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_STDSOLIDDRAFTFEATURE)


BEGIN_COM_MAP(CStdSolidDraftFeatureAuto)
	COM_INTERFACE_ENTRY(IStdSolidDraftFeature)
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
	STDMETHOD(get_TargetFaces)(IReferences** ppVal);
	STDMETHOD(put_TargetFaces)(IReferences* ppVal);
	STDMETHOD(get_PullingDirection)(double* orgX, double* orgY, double* orgZ, double* dirX, double* dirY, double* dirZ);
	STDMETHOD(PutPullingDirection)(double orgX, double orgY, double orgZ, double dirX, double dirY, double dirZ);
	STDMETHOD(get_DraftAngle)(double* pVal);
	STDMETHOD(put_DraftAngle)(double pVal);

};

//OBJECT_ENTRY_AUTO(__uuidof(StdSolidDraftFeature), CStdSolidDraftFeatureAuto)
