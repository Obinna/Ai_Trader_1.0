
// Ai_Trader_1.0View.cpp : CAi_Trader_10View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CAi_Trader_10View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CAi_Trader_10View 构造/析构

CAi_Trader_10View::CAi_Trader_10View()
{
	// TODO:  在此处添加构造代码

}

CAi_Trader_10View::~CAi_Trader_10View()
{
}

BOOL CAi_Trader_10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CScrollView::PreCreateWindow(cs);
}

// CAi_Trader_10View 绘制

void CAi_Trader_10View::OnDraw(CDC* /*pDC*/)
{
	CAi_Trader_10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}

void CAi_Trader_10View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO:  计算此视图的合计大小
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}


// CAi_Trader_10View 打印


void CAi_Trader_10View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CAi_Trader_10View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CAi_Trader_10View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CAi_Trader_10View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
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


// CAi_Trader_10View 诊断

#ifdef _DEBUG
void CAi_Trader_10View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CAi_Trader_10View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CAi_Trader_10Doc* CAi_Trader_10View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAi_Trader_10Doc)));
	return (CAi_Trader_10Doc*)m_pDocument;
}
#endif //_DEBUG


// CAi_Trader_10View 消息处理程序
