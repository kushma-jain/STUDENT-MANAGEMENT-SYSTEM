// ViewAllStudents.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "ViewAllStudents.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ViewAllStudents dialog


ViewAllStudents::ViewAllStudents(CWnd* pParent /*=NULL*/)
	: CDialog(ViewAllStudents::IDD, pParent)
{
	//{{AFX_DATA_INIT(ViewAllStudents)
	m_alldata = _T("");
	//}}AFX_DATA_INIT
}


void ViewAllStudents::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ViewAllStudents)
	DDX_Text(pDX, IDC_EDIT1, m_alldata);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ViewAllStudents, CDialog)
	//{{AFX_MSG_MAP(ViewAllStudents)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ViewAllStudents message handlers

void ViewAllStudents::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void ViewAllStudents::OnOK() 
{
	// TODO: Add extra validation here
MessageBox("hi");	
//	CDialog::OnOK();

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
