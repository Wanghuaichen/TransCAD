// PartFrame.cpp : PartFrame Ŭ������ ����
//
#include "stdafx.h"
#include "TransCAD.h"

#include "PartFrame.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// PartFrame

IMPLEMENT_DYNCREATE(PartFrame, CMDIChildWnd)

BEGIN_MESSAGE_MAP(PartFrame, CMDIChildWnd)
END_MESSAGE_MAP()


// PartFrame ����/�Ҹ�

PartFrame::PartFrame()
{
	// TODO: ���⿡ ��� �ʱ�ȭ �ڵ带 �߰��մϴ�.
}

PartFrame::~PartFrame()
{
}


BOOL PartFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡�� Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.
	if( !CMDIChildWnd::PreCreateWindow(cs) )
		return FALSE;

	return TRUE;
}


// PartFrame ����

#ifdef _DEBUG
void PartFrame::AssertValid() const
{
	CMDIChildWnd::AssertValid();
}

void PartFrame::Dump(CDumpContext& dc) const
{
	CMDIChildWnd::Dump(dc);
}

#endif //_DEBUG


// PartFrame �޽��� ó����
