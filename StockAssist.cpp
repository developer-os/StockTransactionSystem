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
	 CInternetFile* webfile=NULL; //����һ���ļ�����ָ��

	 webfile=(CInternetFile*)m_Mysession->OpenURL(str);//������

	 //�����ļ�ǰһ���֣���������ļ�����80�У�����ֻ��ʾǰ80��
	 int i=0;
	 while(webfile->ReadString(Line)&&i<80)
	 {
		 m_RecieveDataText = m_RecieveDataText + Line +"\r\n"; //ÿ����Ϣ���뻻�б�־
		 i++;
	 }

}