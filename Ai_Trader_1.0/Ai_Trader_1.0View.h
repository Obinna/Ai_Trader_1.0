
// Ai_Trader_1.0View.h : CAi_Trader_10View ��Ľӿ�
//

#pragma once


class CAi_Trader_10View : public CScrollView
{
protected: // �������л�����
	CAi_Trader_10View();
	DECLARE_DYNCREATE(CAi_Trader_10View)

// ����
public:
	CAi_Trader_10Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CAi_Trader_10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Ai_Trader_1.0View.cpp �еĵ��԰汾
inline CAi_Trader_10Doc* CAi_Trader_10View::GetDocument() const
   { return reinterpret_cast<CAi_Trader_10Doc*>(m_pDocument); }
#endif

