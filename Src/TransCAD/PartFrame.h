// PartFrame.h : PartFrame Ŭ������ �������̽�
//


#pragma once


class PartFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(PartFrame)
public:
	PartFrame();

// Ư��
public:

// �۾�
public:

// ������
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ����
public:
	virtual ~PartFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// �޽��� �� �Լ��� �����߽��ϴ�.
protected:
	DECLARE_MESSAGE_MAP()
};
