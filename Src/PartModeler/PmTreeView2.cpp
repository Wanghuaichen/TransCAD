// PmTreeView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "PmTreeView.h"
#include ".\pmtreeview.h"


// PmTreeView

IMPLEMENT_DYNCREATE(PmTreeView, CTreeView)

PmTreeView::PmTreeView()
{
}

PmTreeView::~PmTreeView()
{
}

BEGIN_MESSAGE_MAP(PmTreeView, CTreeView)
END_MESSAGE_MAP()


// PmTreeView �����Դϴ�.

#ifdef _DEBUG
void PmTreeView::AssertValid() const
{
	CTreeView::AssertValid();
}

void PmTreeView::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}
#endif //_DEBUG


// PmTreeView �޽��� ó�����Դϴ�.