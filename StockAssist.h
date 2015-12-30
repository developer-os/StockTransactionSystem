#pragma once
#include <Windows.h>
#include <afxinet.h>
class CStockAssist
{
public:
	CStockAssist(void);
	~CStockAssist(void);
public:
	void GetUrlData(CString str);
private :
	CInternetSession *m_Mysession;
	CString m_RecieveDataText;
};

