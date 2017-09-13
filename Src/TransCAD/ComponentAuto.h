// ComponentAuto.h : CComponentAuto�� �����Դϴ�.

#pragma once
#include "resource.h"       // �� ��ȣ�Դϴ�.

#include "TransCAD.h"
#include ".\DispatchImplEx.h"



//#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
//#error "���� ������ COM ��ü�� ��ü DCOM ������ �������� �ʴ� Windows Mobile �÷����� ���� Windows CE �÷������� ����� �������� �ʽ��ϴ�. ATL�� ���� ������ COM ��ü�� ������ �����ϰ� ���� ������ COM ��ü ������ ����� �� �ֵ��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA�� �����Ͻʽÿ�. rgs ������ ������ ���� DCOM Windows CE�� �ƴ� �÷������� �����Ǵ� ������ ������ ���̹Ƿ� 'Free'�� �����Ǿ� �ֽ��ϴ�."
//#endif

//using namespace ATL;


// CComponentAuto

class ATL_NO_VTABLE CComponentAuto :
	public CComObjectRootEx<CComSingleThreadModel>,
	//public CComCoClass<CComponentAuto, &CLSID_ComponentAuto>,
	public IDispatchImplEx<IComp, &IID_IComp, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CComponentAuto()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COMPONENTAUTO)


BEGIN_COM_MAP(CComponentAuto)
	COM_INTERFACE_ENTRY(IComp)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
		//ReleaseDispatchImplEx();
	}
	void Initialize(PmeHComponent hComponent);

	PmeHComponent GetHComponent(void) {return m_hComponent;}

	static HRESULT GetICompFromHComp(PmeHComponent hComp, IComp** ppVal);
	static HRESULT GetIPartFromHPart(PmeHPart hPart, IPart** ppVal);
private:
	PmeHComponent m_hComponent;

public:
	STDMETHOD(set_Name)(BSTR pVal);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(set_ParentName)(BSTR pVal);
	STDMETHOD(get_ParentName)(BSTR* pVal);
	
	STDMETHOD(GetPart)(/*PmeHComponent& hComp,*/ int i, IPart** ppVal);
	STDMETHOD(GetComponent)(/*PmeHComponent& hComp,*/ int i, IComp** ppVal);
	STDMETHOD(IsPart)( /*PmeHComponent& hComp,*/ int i,  VARIANT_BOOL* pVal);
	STDMETHOD(IsComponent)(/* PmeHComponent& hComp,*/ int i, VARIANT_BOOL* pVal);

	STDMETHOD(GetPlacement)(/*PmeHComponent hComponent,*/ double* ox, double* oy, double* oz, double* xx, double* xy, double* xz, double* yx, double* yy, double* yz);
	STDMETHOD(SetPlacement)(/*PmeHComponent hComponent,*/ double ox, double oy, double oz, double zx, double zy, double zz, double xx, double xy, double xz);

	STDMETHOD(AddPart)(/*PmeHComponent& hItem,*/ IPart* pVal);
	STDMETHOD(AddComponent)(/*PmeHComponent& hItem,*/ IComp* pVal);

	STDMETHOD(GetSize)(/*PmeHComponent hItem,*/ int * pVal);

	STDMETHOD(SaveAsMesh)(int i, BSTR name);

	// for test
	STDMETHOD(CreatePart)( BSTR naem, IPart** ppVal );
	STDMETHOD(ImportPartFromXML)( BSTR path, IPart* pVal, IPart** ppVal );
	STDMETHOD(SetPartPlacement)( IPart* pVal, double ox, double oy, double oz, double zx, double zy, double zz, double xx, double xy, double xz );

};

//OBJECT_ENTRY_AUTO(__uuidof(ComponentAuto), CComponentAuto)
