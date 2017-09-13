#pragma once

#include "afxwin.h"
#include ".\resource.h"
#include "AssemApplyConstraintDialog.h"

// AssemApplyIncidenceDialog ��ȭ �����Դϴ�.

class AssemApplyIncidenceDialog : public AssemApplyConstraintDialog
{
	DECLARE_DYNAMIC(AssemApplyIncidenceDialog)

public:
	AssemApplyIncidenceDialog( AssemView * pView, CWnd* pParent = NULL );   // ǥ�� �������Դϴ�.
	virtual ~AssemApplyIncidenceDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CONSTRAINT_INCIDENCE };

// ����� ���� ���� �� �Լ� //
public:
	PmeStdAssemblyIncidenceType m_incidenceType;
	CComboBox					m_incidenceTypeComboBox;

public:
	virtual BOOL OnInitDialog();
	bool ApplyConstraint(void);

	
// ����� ���� ���� �� �Լ� ������ //

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeConstrainedGeomType();
	afx_msg void OnCbnSelchangeReferenceGeomType();
};
