// ViewALLStudents1.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "ViewALLStudents1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ViewALLStudents dialog


ViewALLStudents::ViewALLStudents(CWnd* pParent /*=NULL*/)
	: CDialog(ViewALLStudents::IDD, pParent)
{
	//{{AFX_DATA_INIT(ViewALLStudents)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ViewALLStudents::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ViewALLStudents)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ViewALLStudents, CDialog)
	//{{AFX_MSG_MAP(ViewALLStudents)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ViewALLStudents message handlers
