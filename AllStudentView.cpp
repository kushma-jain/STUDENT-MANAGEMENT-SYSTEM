// AllStudentView.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "AllStudentView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// AllStudentView dialog


AllStudentView::AllStudentView(CWnd* pParent /*=NULL*/)
	: CDialog(AllStudentView::IDD, pParent)
{
	//{{AFX_DATA_INIT(AllStudentView)
	m_alldata = _T("");
	//}}AFX_DATA_INIT
}


void AllStudentView::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(AllStudentView)
	DDX_Text(pDX, IDC_RICHEDIT1, m_alldata);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(AllStudentView, CDialog)
	//{{AFX_MSG_MAP(AllStudentView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// AllStudentView message handlers

void AllStudentView::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void AllStudentView::OnOK() 
{
	// TODO: Add extra validation here
	
//	CDialog::OnOK();

	MessageBox("Hi");
}
