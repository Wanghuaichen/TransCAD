// StdSketchCoincidentSamePointsAuto.h : CStdSketchCoincidentSamePointsAuto�� �����Դϴ�.

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

typedef IDispatchImplEx<IStdSketchCoincidentSamePoints, &IID_IStdSketchCoincidentSamePoints, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0> IStdSketchCoincidentType;


// CStdSketchCoincidentSamePointsAuto

class ATL_NO_VTABLE CStdSketchCoincidentSamePointsAuto :
	public CComObjectRootEx<CComSingleThreadModel>,
	// public CComCoClass<CStdSketchCoincidentSamePointsAuto, &CLSID_StdSketchCoincidentSamePoints>,
	// public IDispatchImpl<IStdSketchCoincidentSamePoints, &IID_IStdSketchCoincidentSamePoints, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0>
	public IStdSketchConstraintImpl<IStdSketchCoincidentType>
{
public:
	CStdSketchCoincidentSamePointsAuto()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_STDSKETCHCOINCIDENTSAMEPOINTS)


BEGIN_COM_MAP(CStdSketchCoincidentSamePointsAuto)
	COM_INTERFACE_ENTRY(IStdSketchCoincidentSamePoints)
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

	STDMETHOD(get_FirstObject)(IReference** ppVal);
	STDMETHOD(get_FirstType)(StdCoincidentSamePointsType* pVal);
	STDMETHOD(get_SecondObject)(IReference** ppVal);
	STDMETHOD(get_SecondType)(StdCoincidentSamePointsType* pVal);

};

// OBJECT_ENTRY_AUTO(__uuidof(StdSketchCoincidentSamePoints), CStdSketchCoincidentSamePointsAuto)