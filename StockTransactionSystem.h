
// StockTransactionSystem.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CStockTransactionSystemApp:
// �йش����ʵ�֣������ StockTransactionSystem.cpp
//

class CStockTransactionSystemApp : public CWinApp
{
public:
	CStockTransactionSystemApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CStockTransactionSystemApp theApp;