// PartView.h : iPartView Ŭ������ �������̽�
//


#pragma once

class PartView
	: public CView
{
protected: // serialization������ ��������ϴ�.
	PartView();
	DECLARE_DYNCREATE(PartView)

// Ư��
public:
	PartDocument* GetDocument() const;

// �۾�
public:

// ������
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.

	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����
public:
	virtual ~PartView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �޽��� �� �Լ��� �����߽��ϴ�.
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
};

#ifndef _DEBUG  // PartView.cpp�� ����� ����
inline PartDocument* PartView::GetDocument() const
   { return reinterpret_cast<PartDocument*>(m_pDocument); }
#endif