
// Ai_Trader_1.0.h : Ai_Trader_1.0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAi_Trader_10App:
// �йش����ʵ�֣������ Ai_Trader_1.0.cpp
//

class CAi_Trader_10App : public CWinAppEx
{
public:
	CAi_Trader_10App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAi_Trader_10App theApp;
