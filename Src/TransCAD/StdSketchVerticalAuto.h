// StdSketchVerticalAuto.h : CStdSketchVerticalAuto�� �����Դϴ�.

#pragma once
#include "resource.h"       // �� ��ȣ�Դϴ�.



//#include "TransCAD_i.h"
#include "TransCAD.h"
#include ".\DispatchImplEx.h"
#include ".\StdSketchConstraintImpl.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "���� ������ COM ��ü�� ��ü DCOM ������ �������� �ʴ� Windows Mobile �÷����� ���� Windows CE �÷������� ����� �������� �ʽ��ϴ�. ATL�� ���� ������ COM ��ü�� ������ �����ϰ� ���� ������ COM ��ü ������ ����� �� �ֵ��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA�� �����Ͻʽÿ�. rgs ������ ������ ���� DCOM Windows CE�� �ƴ� �÷������� �����Ǵ� ������ ������ ���̹Ƿ� 'Free'�� �����Ǿ� �ֽ��ϴ�."
#endif

using namespace ATL;

typedef IDispatchImplEx<IStdSketchVertical, &IID_IStdSketchVertical, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0> IStdSketchVerticalType;


// CStdSketchVerticalAuto

class ATL_NO_VTABLE CStdSketchVerticalAuto :
	public CComObjectRootEx<CComSingleThreadModel>,
	// public CComCoClass<CStdSketchVerticalAuto, &CLSID_StdSketchVertical>,
	// public IDispatchImpl<IStdSketchVertical, &IID_IStdSketchVertical, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0>
	public IStdSketchConstraintImpl<IStdSketchVerticalType>
{
public:
	CStdSketchVerticalAuto()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_STDSKETCHVERTICAL)


BEGIN_COM_MAP(CStdSketchVerticalAuto)
	COM_INTERFACE_ENTRY(IStdSketchVertical)
	COM_INTERFACE_ENTRY(IStdSketchConstraint)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(get_Target)(IReference** ppVal);

};

// OBJECT_ENTRY_AUTO(__uuidof(StdSketchVertical), CStdSketchVerticalAuto)
