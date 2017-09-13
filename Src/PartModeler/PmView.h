// PmView.h : iPmView Ŭ������ �������̽�
//


#pragma once

#include ".\PmMacro.h"
#include "CHoopsView.h"
#include "PmCreateFeatureDialog.h"

enum ModelHandedness
{
	HandednessSetLeft,
	HandednessSetRight,
	HandednessSetNone,
	HandednessNotSet
};

class PmHView;
class PmDocument;
class PmeFeature;
class PmCreateFeatureDialog;
class PmViewPersistentNameDialog;

class PM_API PmView
	: public CHoopsView
{
protected: // serialization������ ��������ϴ�.
	PmView();
	DECLARE_DYNCREATE(PmView)

// Ư��
public:
	PmDocument* GetDocument() const;
	PmHView * GetHView() const;

	void SetCoordinateSystemHandedness(HandednessMode rightOrLeft, bool emitMessage = true);
	void SetWindowColor(COLORREF newTopColor, COLORREF newBottomColor, bool emitMessage = true);
	void SetPolygonHandedness(ModelHandedness newHandedness);
	void SetMarkupColor(COLORREF newColor, bool emitMessage = true);
	void SetShadowColor(COLORREF newColor);

// �۾�
private:
	void ZoomCamera(double factor);
	void SetInitialCameraPosition(double distance = 1000.0);

public:
	virtual void SetOperator(HBaseOperator * pNewOperator);
	virtual HBaseOperator * GetOperator(void);

	void FitWorld(void);
	static PmView * GetActiveView(void); 
	void SelectFeature(PmeFeature * pFeature);
	
	PmCreateFeatureDialog * GetFeatureDialog() {return pDialog;}
	void SetFeatureDialog(PmCreateFeatureDialog * dialog) {pDialog = dialog;}
	void DeleteFeatureDialog(void) {delete pDialog;}
// ������
public:
	// virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	//	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����
public:
	virtual ~PmView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	PmCreateFeatureDialog * pDialog;
	PmViewPersistentNameDialog * pPNDialog;

// �޽��� �� �Լ��� �����߽��ϴ�.
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	virtual void OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView);
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnViewManipulation();
	afx_msg void OnUpdateViewManipulation(CCmdUI *pCmdUI);
	afx_msg void OnViewPan();
	afx_msg void OnUpdateViewPan(CCmdUI *pCmdUI);
	afx_msg void OnViewOrbit();
	afx_msg void OnUpdateViewOrbit(CCmdUI *pCmdUI);
	afx_msg void OnViewZoomIn();
	afx_msg void OnViewZoomOut();
	afx_msg void OnViewZoomToWindow();
	afx_msg void OnUpdateViewZoomToWindow(CCmdUI *pCmdUI);
	afx_msg void OnViewFront();
	afx_msg void OnViewBack();
	afx_msg void OnViewLeft();
	afx_msg void OnViewRight();
	afx_msg void OnViewTop();
	afx_msg void OnViewBottom();
	afx_msg void OnViewWireframe();
	afx_msg void OnUpdateViewWireframe(CCmdUI *pCmdUI);
	afx_msg void OnViewFlatShading();
	afx_msg void OnUpdateViewFlatShading(CCmdUI *pCmdUI);
	afx_msg void OnViewGouroudShadihg();
	afx_msg void OnUpdateViewGouroudShadihg(CCmdUI *pCmdUI);
	afx_msg void OnViewPhongShading();
	afx_msg void OnUpdateViewPhongShading(CCmdUI *pCmdUI);
	afx_msg void OnViewHiddenLine();
	afx_msg void OnUpdateViewHiddenLine(CCmdUI *pCmdUI);
	afx_msg void OnViewActiveSketchViewpoint();
	afx_msg void OnViewDefaultViewpoint();
	afx_msg void OnViewZoomAll();
	afx_msg void OnViewPersistentName();
	afx_msg void OnUpdateViewPersistentName(CCmdUI *pCmdUI);
	afx_msg void OnCreateEdgeFillet();
	afx_msg void OnCreateChamfer();
	afx_msg void OnCreateShell();
	afx_msg void OnCreateDraft();
	afx_msg void OnCreateOffset();
	afx_msg void OnCreateExtrude();
	afx_msg void OnCreateRevolve();
	afx_msg void OnCreateSweep();
	afx_msg void OnCreateHole();
	afx_msg void OnCreatePatternRectangular();
	afx_msg void OnCreatePatternCircular();
	afx_msg void OnCreateDatumPlaneOffset();

	void CreateFeatureDialog(PmeFeatureType type);
	void DestroyActiveDialog(void);
	
	void OnMeshGeneration(double normalTolerance,double surfaceTolerance);
	double GetBBDiagonal();

	afx_msg void OnMButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // PmView.cpp�� ����� ����
inline PmDocument* PmView::GetDocument() const
   { return reinterpret_cast<PmDocument*>(m_pDocument); }
#endif

