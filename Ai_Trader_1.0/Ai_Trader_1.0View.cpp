
// Ai_Trader_1.0View.cpp : CAi_Trader_10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Ai_Trader_1.0.h"
#endif

#include "Ai_Trader_1.0Doc.h"
#include "Ai_Trader_1.0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAi_Trader_10View

IMPLEMENT_DYNCREATE(CAi_Trader_10View, CScrollView)

BEGIN_MESSAGE_MAP(CAi_Trader_10View, CScrollView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CAi_Trader_10View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CAi_Trader_10View ����/����

CAi_Trader_10View::CAi_Trader_10View()
{
	// TODO:  �ڴ˴���ӹ������

}

CAi_Trader_10View::~CAi_Trader_10View()
{
}

BOOL CAi_Trader_10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CScrollView::PreCreateWindow(cs);
}

// CAi_Trader_10View ����

void CAi_Trader_10View::OnDraw(CDC* /*pDC*/)
{
	CAi_Trader_10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}

void CAi_Trader_10View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO:  �������ͼ�ĺϼƴ�С
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}


// CAi_Trader_10View ��ӡ


void CAi_Trader_10View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CAi_Trader_10View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CAi_Trader_10View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CAi_Trader_10View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}

void CAi_Trader_10View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CAi_Trader_10View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CAi_Trader_10View ���

#ifdef _DEBUG
void CAi_Trader_10View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CAi_Trader_10View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CAi_Trader_10Doc* CAi_Trader_10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAi_Trader_10Doc)));
	return (CAi_Trader_10Doc*)m_pDocument;
}
#endif //_DEBUG


// CAi_Trader_10View ��Ϣ�������
