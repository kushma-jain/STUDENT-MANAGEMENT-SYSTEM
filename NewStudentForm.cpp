// NewStudentForm.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "NewStudentForm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// NewStudentForm dialog


NewStudentForm::NewStudentForm(CWnd* pParent /*=NULL*/)
	: CDialog(NewStudentForm::IDD, pParent)
{
	//{{AFX_DATA_INIT(NewStudentForm)
	m_rollnum = _T("");
	m_studentname = _T("");
	m_address = _T("");
	m_marks = _T("");
	m_dept = _T("");
	m_semester = _T("");
	//}}AFX_DATA_INIT
}


void NewStudentForm::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(NewStudentForm)
	DDX_Text(pDX, IDC_EDIT1, m_rollnum);
	DDX_Text(pDX, IDC_EDIT2, m_studentname);
	DDX_Text(pDX, IDC_EDIT4, m_address);
	DDX_Text(pDX, IDC_EDIT5, m_marks);
	DDX_Text(pDX, IDC_EDIT7, m_dept);
	DDX_Text(pDX, IDC_EDIT3, m_semester);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(NewStudentForm, CDialog)
	//{{AFX_MSG_MAP(NewStudentForm)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// NewStudentForm message handlers

void NewStudentForm::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void NewStudentForm::OnOK() 
{
	// TODO: Add extra validation here
	
	//	CDialog::OnOK();
	UpdateData();

	CStdioFile writeToFile;
	CFileException fileException;
	CString strFilePath = _T("F:\\StudentData.txt");

	CString contents =  m_rollnum + "&" + m_studentname + "&" + m_semester + "&" + m_dept + "&" + m_address + "&" + m_marks; 

	if (writeToFile.Open( strFilePath, CFile::modeCreate|CFile::modeWrite|CFile::modeNoTruncate), &fileException)
	{
		writeToFile.SeekToEnd();
		//writeToFile.WriteString(_T("\n"));
		writeToFile.WriteString(_T(contents));
		writeToFile.WriteString(_T("\n"));
		//writeToFile.WriteString(_T("Bye\n"));
		MessageBox("Student Data Inserted Success");
	}
	else
	{
		CString strErrorMsg;
		strErrorMsg.Format(_T("Can't open file %s , error : %u"), strFilePath, fileException.m_cause);
		AfxMessageBox(strErrorMsg);
	}

	writeToFile.Close();
}
