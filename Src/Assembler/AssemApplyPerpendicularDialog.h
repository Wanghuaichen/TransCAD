#pragma once

#include "afxwin.h"
#include ".\resource.h"
#include "AssemApplyConstraintDialog.h"

// AssemApplyPerpendicularDialog ��ȭ �����Դϴ�.

class AssemApplyPerpendicularDialog : public AssemApplyConstraintDialog
{
	DECLARE_DYNAMIC(AssemApplyPerpendicularDialog)

public:
	AssemApplyPerpendicularDialog( AssemView * pView, CWnd* pParent = NULL );   // ǥ�� �������Դϴ�.
	virtual ~AssemApplyPerpendicularDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CONSTRAINT_PERPENDICULAR };

// ����� ���� ���� �� �Լ� //
public:


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
