// PmViewPersistentNameDialog.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "PmViewPersistentNameDialog.h"
#include ".\PmViewPersistentNameOperator.h"
#include "PmViewManipulationOperator.h"
#include "PmHSelectionSet.h"
#include "PmView.h"

// PmViewPersistentNameDialog ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(PmViewPersistentNameDialog, CDialog)
PmViewPersistentNameDialog::PmViewPersistentNameDialog(PmView * pView, CWnd* pParent /*=NULL*/)
	: CDialog(PmViewPersistentNameDialog::IDD, pParent)
	, m_pView(pView)
	, m_isFace(TRUE)
	, m_isEdge(FALSE)
	, m_isVertex(FALSE)
{
	m_pOperator = new PmViewPersistentNameOperator(this, m_pView->GetHView());
	m_pView->SetOperator(m_pOperator);
}

PmViewPersistentNameDialog::~PmViewPersistentNameDialog()
{
	OnCancel();
}

void PmViewPersistentNameDialog::OnCancel()
{
	PmHSelectionSet * pSelection = static_cast<PmHSelectionSet *>(m_pView->GetHoopsView()->GetSelection());
	pSelection->DeSelectAll();

	DestroyWindow();
	m_pView->SetOperator(new PmViewManipulationOperator(m_pView->GetHView()));
}

void PmViewPersistentNameDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_VIEW_PERSISTENT_NAME_NAME, m_persistentName);
	DDX_Check(pDX, IDC_VIEW_PERSISTENT_NAME_FACE, m_isFace);
	DDX_Check(pDX, IDC_VIEW_PERSISTENT_NAME_EDGE, m_isEdge);
	DDX_Check(pDX, IDC_VIEW_PERSISTENT_NAME_VERTEX, m_isVertex);
}


BEGIN_MESSAGE_MAP(PmViewPersistentNameDialog, CDialog)
	ON_BN_CLICKED(IDC_VIEW_PERSISTENT_NAME_FACE, OnBnClickedViewPersistentNameFace)
	ON_BN_CLICKED(IDC_VIEW_PERSISTENT_NAME_EDGE, OnBnClickedViewPersistentNameEdge)
	ON_BN_CLICKED(IDC_VIEW_PERSISTENT_NAME_VERTEX, OnBnClickedViewPersistentNameVertex)
END_MESSAGE_MAP()


// PmViewPersistentNameDialog �޽��� ó�����Դϴ�.

void PmViewPersistentNameDialog::OnBnClickedViewPersistentNameFace()
{
	m_isFace = TRUE;
	m_isEdge = FALSE;
	m_isVertex = FALSE;

	m_pOperator->OnFace();

	UpdateData(FALSE);
}

void PmViewPersistentNameDialog::OnBnClickedViewPersistentNameEdge()
{
	m_isFace = FALSE;
	m_isEdge = TRUE;
	m_isVertex = FALSE;

	m_pOperator->OnEdge();

	UpdateData(FALSE);
}

void PmViewPersistentNameDialog::OnBnClickedViewPersistentNameVertex()
{
	m_isFace = FALSE;
	m_isEdge = FALSE;
	m_isVertex = TRUE;

	m_pOperator->OnVertex();

	UpdateData(FALSE);
}

BOOL PmViewPersistentNameDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	OnBnClickedViewPersistentNameFace();

	return TRUE;  // return TRUE unless you set the focus to a control
	// ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}