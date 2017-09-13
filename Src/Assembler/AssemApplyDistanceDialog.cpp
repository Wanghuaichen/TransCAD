// AssemApplyDistanceDialog.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "AssemApplyDistanceDialog.h"
#include "..\PartModelingEngine\PmeStdAssemblyDistanceAPI.h"

#include ".\AssemView.h"

#include ".\AssemHSelectionSet.h"
#include ".\AssemViewPersistentNameOperator.h"


// AssemApplyDistanceDialog ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(AssemApplyDistanceDialog, AssemApplyConstraintDialog)

AssemApplyDistanceDialog::AssemApplyDistanceDialog( AssemView * pView, CWnd* pParent /*=NULL*/)
	: AssemApplyConstraintDialog( pView )
{
	m_selectPart = 0;
	m_incidenceType = PmeStdAssemblyIncidenceType_Opposite;
}

AssemApplyDistanceDialog::~AssemApplyDistanceDialog()
{
}

void AssemApplyDistanceDialog::DoDataExchange(CDataExchange* pDX)
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
	DDX_Control( pDX, IDC_INCIDENCE_TYPE, m_distanceTypeComboBox );
	DDX_Control( pDX, IDC_DISTANCE_VALUE, m_distanceValue );
}


BEGIN_MESSAGE_MAP(AssemApplyDistanceDialog, AssemApplyConstraintDialog)
	ON_CBN_SELCHANGE(IDC_CONSTRAINED_GEOM_TYPE, &AssemApplyDistanceDialog::OnCbnSelchangeConstrainedGeomType)
	ON_CBN_SELCHANGE(IDC_REFERENCE_GEOM_TYPE, &AssemApplyDistanceDialog::OnCbnSelchangeReferenceGeomType)
END_MESSAGE_MAP()


BOOL AssemApplyDistanceDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_constraintName.SetWindowText( GetNewConstraintName( PmeStdAssemblyConstraintType_Distance ) );
	m_constraintName.SetFocus();

	m_constrainedGeomType.AddString( _T("linear edge") );	// 0
	m_constrainedGeomType.AddString( _T("planar face") );	// 1
	m_constrainedGeomType.SetCurSel(1);

	m_referenceGeomType.AddString( _T("planar face") );
	m_referenceGeomType.AddString( _T("linear edge") );
	m_referenceGeomType.SetCurSel(1);

	m_distanceTypeComboBox.AddString( _T("Opposite") );		// 0
	m_distanceTypeComboBox.AddString( _T("Same") );
	m_distanceTypeComboBox.SetCurSel(0);

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

	// Incidence type�� constrained�� reference ��� "face"�� �����Ǿ�� Ȱ��ȭ
	CString _constrainedGeomType, _referenceGeomType;
	m_constrainedGeomType.GetWindowTextA( _constrainedGeomType );
	m_referenceGeomType.GetWindowTextA( _referenceGeomType );
	
	if ( _constrainedGeomType == "planar face" && _referenceGeomType == "planar face" )
	{
		m_distanceTypeComboBox.EnableWindow( TRUE );
	}
	else
	{
		m_distanceTypeComboBox.EnableWindow( FALSE );
	}

	// m_constrainedGeomType�� �⺻ ���� "planar face"�� ���������Ƿ�,
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

void AssemApplyDistanceDialog::OnCbnSelchangeConstrainedGeomType()
{
	m_selectPart = 0;

	ApplySelectionFilter( m_selectPart );

	// Incidence type�� constrained�� reference ��� face�� �����Ǿ�� Ȱ��ȭ
	CString _constrainedGeomType, _referenceGeomType;
	m_constrainedGeomType.GetWindowTextA( _constrainedGeomType );
	m_referenceGeomType.GetWindowTextA( _referenceGeomType );
	
	if ( _constrainedGeomType == "planar face" && _referenceGeomType == "planar face" )
	{
		m_distanceTypeComboBox.EnableWindow( TRUE );
	}
	else
	{
		m_distanceTypeComboBox.EnableWindow( FALSE );
	}
}


void AssemApplyDistanceDialog::OnCbnSelchangeReferenceGeomType()
{
	m_selectPart = 1;

	ApplySelectionFilter( m_selectPart );

	// Incidence type�� constrained�� reference ��� face�� �����Ǿ�� Ȱ��ȭ
	CString _constrainedGeomType, _referenceGeomType;
	m_constrainedGeomType.GetWindowTextA( _constrainedGeomType );
	m_referenceGeomType.GetWindowTextA( _referenceGeomType );
	
	if ( _constrainedGeomType == "planar face" && _referenceGeomType == "planar face" )
	{
		m_distanceTypeComboBox.EnableWindow( TRUE );
	}
	else
	{
		m_distanceTypeComboBox.EnableWindow( FALSE );
	}
}

bool AssemApplyDistanceDialog::ApplyConstraint()
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

	CString _incidenceType;
	CString _distanceValue;

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

	m_distanceTypeComboBox.GetWindowText( _incidenceType );

	m_distanceValue.GetWindowTextA( _distanceValue );
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

	if ( _distanceValue.IsEmpty() )
	{
		AfxMessageBox( _T("Enter the distance value") );
		return false;
	}
/******************** �Է� ���� ��ȿ�� �Ǵ� ���� ********************/


	if ( _incidenceType == "Opposite" )
		m_incidenceType = PmeStdAssemblyIncidenceType_Opposite;

	else
		m_incidenceType = PmeStdAssemblyIncidenceType_Same;


	PmeHPart _hConstrainedPart, _hReferencePart;

	PmeAssemblyAPI::GetPartByName( m_hAssembly, _constrainedCompName, _constrainedPartName, _hConstrainedPart );
	PmeAssemblyAPI::GetPartByName( m_hAssembly, _referenceCompName, _referencePartName, _hReferencePart );


	PmeHReference _hConstrainedGeometry, _hReferenceGeometry;

	PmePartAPI::SelectBrepByName( _hConstrainedPart, _constrainedGeomName, _hConstrainedGeometry );
	PmePartAPI::SelectBrepByName( _hReferencePart, _referenceGeomName, _hReferenceGeometry );

	double distanceValue = atof( _distanceValue );


	bool result = PmeStdAssemblyDistanceAPI::ApplyDistance( m_hAssembly,
								  							_constraintName,
															_hConstrainedPart,
															_hConstrainedGeometry,
															_hReferencePart,
															_hReferenceGeometry,
															distanceValue,
															m_incidenceType );
	

	if ( result ) return true;
	else return false;
}