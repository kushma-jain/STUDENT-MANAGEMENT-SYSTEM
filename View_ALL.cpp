// View_ALL.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "View_ALL.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// View_ALL dialog


View_ALL::View_ALL(CWnd* pParent /*=NULL*/)
	: CDialog(View_ALL::IDD, pParent)
{
	//{{AFX_DATA_INIT(View_ALL)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void View_ALL::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(View_ALL)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(View_ALL, CDialog)
	//{{AFX_MSG_MAP(View_ALL)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// View_ALL message handlers
