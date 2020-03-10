// ViewAll2.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "ViewAll2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ViewAll2 dialog


ViewAll2::ViewAll2(CWnd* pParent /*=NULL*/)
	: CDialog(ViewAll2::IDD, pParent)
{
	//{{AFX_DATA_INIT(ViewAll2)
	m_alldata = _T("");
	//}}AFX_DATA_INIT
}


void ViewAll2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ViewAll2)
	DDX_Text(pDX, IDC_EDIT1, m_alldata);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ViewAll2, CDialog)
	//{{AFX_MSG_MAP(ViewAll2)
	ON_BN_CLICKED(IDCANCEL4, OnCancel4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ViewAll2 message handlers

void ViewAll2::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void ViewAll2::OnCancel4() 
{
	// TODO: Add your control notification handler code here

	//VIEW ALL

		CStdioFile readFile;
	CStdioFile writeToFile;

	CFileException fileException;
	UpdateData();
	
	CString strFilePath = _T("F:\\Test.txt");
	
	CString strLine;
	CString str="";
	int bucket=0, flag=0;

	
		
	if (readFile.Open(strFilePath, CFile::modeRead, &fileException))
	{
		
		
		while (readFile.ReadString(strLine))
		{
			//MessageBox(strLine);	
			int i = 0; // substring index to extract
			CString sToken=_T("");
			CStringArray saItems;
			
			while (AfxExtractSubString(sToken, strLine, i,'&'))
			{   
				saItems.Add( sToken );
				i++;
			}

				CString contents =  saItems[0] + "  " + saItems[1] + "  " + saItems[2] + "  " + saItems[3] + "  " + saItems[4] + "  " + saItems[5];
				char Output[50];
				sprintf(Output, "%s\n", contents);
				str = str+Output;
				//MessageBox(str);
			
		}

	readFile.Close();		
	}

	m_alldata = str;
	UpdateData(false);
	//MessageBox(str);				


}
