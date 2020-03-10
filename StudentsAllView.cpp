// StudentsAllView.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "StudentsAllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// StudentsAllView dialog


StudentsAllView::StudentsAllView(CWnd* pParent /*=NULL*/)
	: CDialog(StudentsAllView::IDD, pParent)
{
	//{{AFX_DATA_INIT(StudentsAllView)
	m_allstudents = _T("");
	//}}AFX_DATA_INIT
}


void StudentsAllView::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(StudentsAllView)
	DDX_Text(pDX, IDC_EDIT1, m_allstudents);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(StudentsAllView, CDialog)
	//{{AFX_MSG_MAP(StudentsAllView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// StudentsAllView message handlers

void StudentsAllView::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void StudentsAllView::OnOK() 
{
	// TODO: Add extra validation here
	
//	CDialog::OnOK();
//  MessageBox("hi");


	CStdioFile readFile;
	CStdioFile writeToFile;

	CFileException fileException;
	UpdateData();
	
	CString strFilePath = _T("F:\\StudentData.txt");
	
	CString strLine;
	CString str="";
	int bucket=0, flag=0;

	
		
	if (readFile.Open(strFilePath, CFile::modeRead, &fileException))
	{
		
		
		while (readFile.ReadString(strLine))
		{
			MessageBox(strLine);	
			int i = 0; // substring index to extract
			CString sToken=_T("");
			CStringArray saItems;
			
			while (AfxExtractSubString(sToken, strLine, i,'&'))
			{   
				saItems.Add( sToken );
				i++;
			}

				CString contents =  saItems[0] + "  " + saItems[1] + "  " + saItems[2] + "  " + saItems[3] + "  " + saItems[4] + "  " + saItems[5]+"\r\n";
				char Output[50];
				sprintf(Output, "%s\n", contents);
				str = str+Output;
				//MessageBox(str);
			
		}

	readFile.Close();		
	}

	m_allstudents = str;
	UpdateData(false);
	//MessageBox(str);				



}
