// PartDocument.cpp : PartDocument Ŭ������ ����
//

#include "stdafx.h"
#include "TransCAD.h"

#include ".\PartDocument.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// PartDocument

IMPLEMENT_DYNCREATE(PartDocument, CDocument)

BEGIN_MESSAGE_MAP(PartDocument, CDocument)
END_MESSAGE_MAP()


// PartDocument ����/�Ҹ�

PartDocument::PartDocument()
{
}

PartDocument::~PartDocument()
{
}

BOOL PartDocument::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}

BOOL PartDocument::OnOpenDocument(LPCTSTR lpszPathName)
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;

	return TRUE;
}

// PartDocument serialization

void PartDocument::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	}
	else
	{
		// TODO: ���⿡ �ε� �ڵ带 �߰��մϴ�.
	}
}


// PartDocument ����

#ifdef _DEBUG
void PartDocument::AssertValid() const
{
	CDocument::AssertValid();
}

void PartDocument::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// PartDocument ���