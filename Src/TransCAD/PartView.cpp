// PartView.cpp : PartView Ŭ������ ����
//

#include "stdafx.h"
#include "TransCAD.h"

#include ".\PartDocument.h"
#include ".\PartView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// PartView

IMPLEMENT_DYNCREATE(PartView, CView)

BEGIN_MESSAGE_MAP(PartView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// PartView ����/�Ҹ�

PartView::PartView()
{
}

PartView::~PartView()
{
}

BOOL PartView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	// Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// PartView �׸���

void PartView::OnDraw(CDC* pDC)
{
	PartDocument* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
}

// PartView �μ�

BOOL PartView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void PartView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void PartView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// PartView ����

#ifdef _DEBUG
void PartView::AssertValid() const
{
	CView::AssertValid();
}

void PartView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

PartDocument* PartView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(PartDocument)));
	return (PartDocument*)m_pDocument;
}
#endif //_DEBUG


// PartView �޽��� ó����

void PartView::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	PartDocument * pDoc = GetDocument();
	ASSERT_VALID(pDoc);

}