// PartDocument.h : PartDocument Ŭ������ �������̽�
//


#pragma once

class PartHModel;
class PartModelerSettings;

class PartDocument
	: public CDocument
{
protected: // serialization������ ��������ϴ�.
	PartDocument();
	DECLARE_DYNCREATE(PartDocument)

// Ư��
public:

private:

// �۾�
public:
private:

// ������
public:
	virtual BOOL OnNewDocument();
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	virtual void Serialize(CArchive& ar);

// ����
public:
	virtual ~PartDocument();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �޽��� �� �Լ��� �����߽��ϴ�.
protected:
	DECLARE_MESSAGE_MAP()

};