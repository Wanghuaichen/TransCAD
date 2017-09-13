// AssemApplyCoaxialDialog.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "AssemApplyCoaxialDialog.h"
#include "..\PartModelingEngine\PmeStdAssemblyCoaxialAPI.h"
#include ".\AssemView.h"

#include ".\AssemHSelectionSet.h"
#include ".\AssemViewPersistentNameOperator.h"
#include ".\PmeStdAssemblyConstraintsAPI.h"

// AssemApplyCoaxialDialog ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(AssemApplyCoaxialDialog, AssemApplyConstraintDialog)

AssemApplyCoaxialDialog::AssemApplyCoaxialDialog( AssemView * pView, CWnd* pParent /*=NULL*/ )
	: AssemApplyConstraintDialog( pView )
{
	m_selectPart = 0;
}

AssemApplyCoaxialDialog::~AssemApplyCoaxialDialog()
{
}

void AssemApplyCoaxialDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control( pDX, IDC_CONSTRAINT_NAME, m_constraintName );
	DDX_Control( pDX, IDC_CONSTRAINED_COMP_NAME, m_constrainedCompName );
	DDX_Control( pDX, IDC_CONSTRAINED_PART_NAME, m_constrainedPartName );
	DDX_Control( pDX, IDC_CONSTRAINED_GEOM_NAME, m_constrainedGeomName );
	DDX_Control( pDX, IDC_CONSTRAINED_GEOM_TYPE, m_constrainedGeomType );
	DDX_Control( pDX, IDC_REFERENCE_COMP_NAME, m_referenceCompName );
	DDX_Control( pDX, IDC_REFERENCE_PART_NAME, m_referencePartName );
	DDX_Control( pDX, IDC_REFERENCE_GEOM_NAME, m_referenceGeomName );
	DDX_Control( pDX, IDC_REFERENCE_GEOM_TYPE, m_referenceGeomType );
}

// BEGIN_MESSAGE_MAP�� 2��° �Ű������� �θ�Ŭ������ �����ؾ� ��
BEGIN_MESSAGE_MAP(AssemApplyCoaxialDialog, AssemApplyConstraintDialog)
	ON_CBN_SELCHANGE(IDC_CONSTRAINED_GEOM_TYPE, &AssemApplyCoaxialDialog::OnCbnSelchangeConstrainedGeomType)
	ON_CBN_SELCHANGE(IDC_REFERENCE_GEOM_TYPE, &AssemApplyCoaxialDialog::OnCbnSelchangeReferenceGeomType)
END_MESSAGE_MAP()


BOOL AssemApplyCoaxialDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_constraintName.SetWindowText( GetNewConstraintName( PmeStdAssemblyConstraintType_Coaxial ) );
	m_constraintName.SetFocus();

	m_constrainedGeomType.AddString( _T("axis(cylinderical face)") );
	m_constrainedGeomType.AddString( _T("circular edge") );
	m_constrainedGeomType.SetCurSel(0);
	
	m_referenceGeomType.AddString( _T("axis(cylinderical face)") );
	m_referenceGeomType.AddString( _T("circular edge") );
	m_referenceGeomType.SetCurSel(0);

	// �⺻������ constrained�� ������ ���� �Է��ϵ��� ����
	// constrained������ radio ��ư�� Ȱ��ȭ�ϸ� reference�����Է��� ����
	if ( m_selectPart == 0 )
	{
		m_partType = PmeStdAssemblyPartType_Constrained;

		m_selectButton = (CButton *)GetDlgItem( IDC_SELECT_CONSTRAINED );
		m_selectButton->SetCheck( TRUE );

		m_referenceGeomType.EnableWindow( FALSE );
		m_referenceCompName.EnableWindow( FALSE );
		m_referencePartName.EnableWindow( FALSE );
		m_referenceGeomName.EnableWindow( FALSE );
	}

	// m_constrainedGeomType�� �⺻ ���� "cylinderical face(= axis)"�� ���������Ƿ�,
	// ���� ���͸� Face�� ����
	m_pOperator->OnFace();

	UpdateData( FALSE );

	// Dialog�� ��ġ ����
	RECT  rectParent;
	CPoint pos;
	(::AfxGetMainWnd())->GetWindowRect(&rectParent);
	
	pos.x = rectParent.left + 210;
	pos.y = rectParent.top + 80;
	SetWindowPos(NULL, pos.x ,pos.y, 0, 0, SWP_NOSIZE);

	return FALSE;

}

void AssemApplyCoaxialDialog::OnCbnSelchangeConstrainedGeomType()
{
	m_selectPart = 0;

	ApplySelectionFilter( m_selectPart );
}


void AssemApplyCoaxialDialog::OnCbnSelchangeReferenceGeomType()
{
	m_selectPart = 1;

	ApplySelectionFilter( m_selectPart );
}

bool AssemApplyCoaxialDialog::ApplyConstraint()
{
	CString _constraintName;

	CString _constrainedCompName;
	CString _constrainedPartName;
	CString _constrainedGeomName;
	CString _constrainedGeomType;

	CString _referenceCompName;
	CString _referencePartName;
	CString _referenceGeomName;
	CString _referenceGeomType;

/******************** GUI�� �Էµ� ���� �޾ƿ��� ���� ********************/
	m_constraintName.GetWindowText( _constraintName );

	m_constrainedCompName.GetWindowText( _constrainedCompName );
	m_constrainedPartName.GetWindowText( _constrainedPartName );
	m_constrainedGeomName.GetWindowText( _constrainedGeomName );
	m_constrainedGeomType.GetWindowText( _constrainedGeomType );
	
	m_referenceCompName.GetWindowText( _referenceCompName );
	m_referencePartName.GetWindowText( _referencePartName );
	m_referenceGeomName.GetWindowText( _referenceGeomName );
	m_referenceGeomType.GetWindowText( _referenceGeomType );
/******************** GUI�� �Էµ� ���� �޾ƿ��� ���� ********************/


/******************** �Է� ���� ��ȿ�� �Ǵ� ���� ********************/
	if ( _constraintName.IsEmpty() )
	{
		AfxMessageBox( _T("Enter the constraint name") );
		return false;
	}

	if ( _constrainedCompName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the constrained component") );
		return false;
	}

	if ( _constrainedPartName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the constrained part") );
		return false;
	}

	if ( _constrainedGeomName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the constrained geometry") );
		return false;
	}

	if ( _referenceCompName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the reference component") );
		return false;
	}

	if ( _referencePartName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the reference part") );
		return false;
	}

	if ( _referenceGeomName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the reference geometry") );
		return false;
	}
/******************** �Է� ���� ��ȿ�� �Ǵ� ���� ********************/


	PmeHPart _hConstrainedPart, _hReferencePart;

	/*CString __constrainedCompName = "Component1_1_1";
	CString __constrainedPartName = "RotationPart";
	CString __referenceCompName = "Component1_1_1";
	CString __referencePartName = "Body";

	PmeAssemblyAPI::GetPartByName( m_hAssembly, __constrainedCompName, __constrainedPartName, _hConstrainedPart );
	PmeAssemblyAPI::GetPartByName( m_hAssembly, __referenceCompName, __referencePartName, _hReferencePart );*/

	PmeAssemblyAPI::GetPartByName( m_hAssembly, _constrainedCompName, _constrainedPartName, _hConstrainedPart );
	PmeAssemblyAPI::GetPartByName( m_hAssembly, _referenceCompName, _referencePartName, _hReferencePart );


	PmeHReference _hConstrainedGeometry, _hReferenceGeometry;

	PmePartAPI::SelectBrepByName( _hConstrainedPart, _constrainedGeomName, _hConstrainedGeometry );
	PmePartAPI::SelectBrepByName( _hReferencePart, _referenceGeomName, _hReferenceGeometry );

	PmeHStdAssemblyConstraint hConstraint = 0;
	PmeStdAssemblyCoaxialAPI::ApplyCoaxial( m_hAssembly,
											_constraintName,
											_hConstrainedPart,
											_hConstrainedGeometry,
											_hReferencePart,
											_hReferenceGeometry,
											hConstraint );
	
	/*PmeHStdAssemblyConstraints _hConstraints;
	PmeAssemblyAPI::GetConstraints( m_hAssembly, _hConstraints );

	PmeStdAssemblyConstraintsAPI::Add( _hConstraints, hConstraint );*/

	if ( hConstraint ) return true;
	else return false;
}