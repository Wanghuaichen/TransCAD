// AssemDocumentAuto.h : CAssemDocumentAuto�� �����Դϴ�.

#pragma once
#include "resource.h"       // �� ��ȣ�Դϴ�.

#include "TransCAD.h"
#include "DispatchImplEx.h"

// #if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
// #error "���� ������ COM ��ü�� ��ü DCOM ������ �������� �ʴ� Windows Mobile �÷����� ���� Windows CE �÷������� ����� �������� �ʽ��ϴ�. ATL�� ���� ������ COM ��ü�� ������ �����ϰ� ���� ������ COM ��ü ������ ����� �� �ֵ��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA�� �����Ͻʽÿ�. rgs ������ ������ ���� DCOM Windows CE�� �ƴ� �÷������� �����Ǵ� ������ ������ ���̹Ƿ� 'Free'�� �����Ǿ� �ֽ��ϴ�."
// #endif

//using namespace ATL;


// CAssemDocumentAuto

class ATL_NO_VTABLE CAssemDocumentAuto :
	public CComObjectRootEx<CComSingleThreadModel>,
//	public CComCoClass<CAssemDocumentAuto, &CLSID_AssemDocumentAuto>,
	public IDispatchImplEx<IAssemDocument, &IID_IAssemDocument, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CAssemDocumentAuto()
			:m_pDocument(0)
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ASSEMDOCUMENTAUTO)


BEGIN_COM_MAP(CAssemDocumentAuto)
	COM_INTERFACE_ENTRY(IAssemDocument)
	COM_INTERFACE_ENTRY(IDoc)
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

	void Initialize(AssemDocument * pDocument);

public:
	// IDoc���� ���� ��ӹ��� �Լ��� ����
	STDMETHOD(get_FullName)(BSTR* pVal);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_Path)(BSTR* pVal);
	STDMETHOD(get_Saved)(VARIANT_BOOL* pVal);
	STDMETHOD(Activate)(void);
	STDMETHOD(Close)(VARIANT_BOOL saveChanges, BSTR filename);
	STDMETHOD(Save)(void);
	STDMETHOD(SaveAs)(BSTR filename);

	// IAssemDocument������ ������ �Լ�
	STDMETHOD(get_Assem)(IAssem** pVal);
	STDMETHOD(Update)(void);

	STDMETHOD(test)(void);


private:
	AssemDocument* m_pDocument;

};

//OBJECT_ENTRY_AUTO(__uuidof(AssemDocumentAuto), CAssemDocumentAuto)
