#include "StdAfx.h"
#include "StockAssist.h"


CStockAssist::CStockAssist(void)
{
	m_Mysession = new CInternetSession();
}


CStockAssist::~CStockAssist(void)
{
}

void  CStockAssist::GetUrlData( CString str )
{	 
	 CString Line;
	 CInternetFile* webfile=NULL; //定义一个文件对象指针

	 webfile=(CInternetFile*)m_Mysession->OpenURL(str);//打开连接

	 //读出文件前一部分，这里如果文件多于80行，这里只显示前80行
	 int i=0;
	 while(webfile->ReadString(Line)&&i<80)
	 {
		 m_RecieveDataText = m_RecieveDataText + Line +"\r\n"; //每行信息加入换行标志
		 i++;
	 }

}