// PmViewHoopsModelTreeDialog.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "PmViewHoopsModelTreeDialog.h"
#include ".\pmviewhoopsmodeltreedialog.h"
#include ".\PmDocument.h"
#include ".\PmHModel.h"


// PmViewHoopsModelTreeDialog ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(PmViewHoopsModelTreeDialog, CDialog)

PmViewHoopsModelTreeDialog::PmViewHoopsModelTreeDialog(PmDocument * pDocument, CWnd* pParent /*=NULL*/)
	: CDialog(PmViewHoopsModelTreeDialog::IDD, pParent)
	, m_pDocument(pDocument)
{
}

PmViewHoopsModelTreeDialog::~PmViewHoopsModelTreeDialog()
{
}

void PmViewHoopsModelTreeDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_VIEW_HOOPS_MODEL_TREE_TREE, m_tree);
}


BEGIN_MESSAGE_MAP(PmViewHoopsModelTreeDialog, CDialog)
END_MESSAGE_MAP()


// PmViewHoopsModelTreeDialog �޽��� ó�����Դϴ�.

BOOL PmViewHoopsModelTreeDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	HC_KEY hRootKey = m_pDocument->GetHModel()->GetModelKey();

	char segmentName[4096];

	HC_Show_Segment(hRootKey, segmentName);
	AddSegmentToTree(segmentName, 0);

	return TRUE;  // return TRUE unless you set the focus to a control
	// ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}

void PmViewHoopsModelTreeDialog::AddSegmentToTree(char * segmentName, HTREEITEM hParent)
{
	char * pos = strrchr(segmentName, '/');
	char * name = (pos + 1);

	HTREEITEM hItem;

	if(hParent)
		hItem = m_tree.InsertItem(name, hParent);
	else
		hItem = m_tree.InsertItem(name);

	m_tree.Expand(hParent, TVE_EXPAND);

	char child[4096];

	HC_Open_Segment(segmentName);
		HC_Begin_Segment_Search("*");
		while(HC_Find_Segment(child))
		{
			AddSegmentToTree(child, hItem);				
		}
		HC_End_Segment_Search();
	HC_Close_Segment();	
}