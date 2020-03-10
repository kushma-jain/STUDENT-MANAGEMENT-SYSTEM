// SearchStudentForm.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "SearchStudentForm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// SearchStudentForm dialog


SearchStudentForm::SearchStudentForm(CWnd* pParent /*=NULL*/)
: CDialog(SearchStudentForm::IDD, pParent)
{
	//{{AFX_DATA_INIT(SearchStudentForm)
	m_rno = _T("");
	m_sname = _T("");
	m_address = _T("");
	m_marks = _T("");
	m_bucketno = _T("");
	m_semester = _T("");
	m_department = _T("");
	//}}AFX_DATA_INIT
}


void SearchStudentForm::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(SearchStudentForm)
	DDX_Text(pDX, IDC_EDIT1, m_rno);
	DDX_Text(pDX, IDC_EDIT2, m_sname);
	DDX_Text(pDX, IDC_EDIT4, m_address);
	DDX_Text(pDX, IDC_EDIT5, m_marks);
	DDX_Text(pDX, IDC_EDIT6, m_bucketno);
	DDX_Text(pDX, IDC_EDIT3, m_semester);
	DDX_Text(pDX, IDC_EDIT7, m_department);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(SearchStudentForm, CDialog)
//{{AFX_MSG_MAP(SearchStudentForm)
ON_BN_CLICKED(IDCANCEL2, OnCancel2)
//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SearchStudentForm message handlers

void SearchStudentForm::OnCancel2() 
{
	// TODO: Add your control notification handler code here
	//CDialog::OnCancel();
	CStdioFile readFile;
	CFileException fileException;
	UpdateData();
	CString strFilePath = _T("F:\\StudentData.txt");
	
	CString rollnum = m_rno;
	CString strLine;
	int bucket=0;	
	if (readFile.Open(strFilePath, CFile::modeRead, &fileException))
	{
		int flag=0;
		int bucket=0;
		while (readFile.ReadString(strLine))
		{
			//MessageBox(strLine);
			CString sToken=_T("");
			CStringArray saItems;
			
			//char Output[20];
			int i = 0; // substring index to extract
			while (AfxExtractSubString(sToken, strLine, i,'&'))
			{   
				//.. 
				//work with sToken
				//..
				//MessageBox(strLine);				
				saItems.Add( sToken );
				i++;
			}

			//CString str= "Rno : " + r + " Roll Num : " + saItems[0];
//			MessageBox(_T(saItems[0]).GetLength());
//			MessageBox("Rno : " + (rollnum.GetLength()));
			//MessageBox(str);
			
			bucket = bucket+1;

			char Output[20];
			sprintf(Output, "%s%d", "Bucket " , bucket);

			if(saItems[0] == rollnum)
			{
				flag=1;
				m_sname = saItems[1];
				m_semester = saItems[2];
				m_department = saItems[3];
				m_address = saItems[4];
				m_marks = saItems[5];
				m_bucketno=Output;
				UpdateData(false);
			}
			
			
			if(flag==1)
			{
				MessageBox("Search Found");
				break;
			}
		}
		if(flag==0)
		{
			MessageBox("Sorry Data Not Found");
		}
	}
	else
	{
		CString strErrorMsg;
		strErrorMsg.Format(_T("Can't open file %s , error : %u"), strFilePath, fileException.m_cause);
		AfxMessageBox(strErrorMsg);
	}
	
	readFile.Close();
	
	
	
}
