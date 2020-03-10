// AdminMainForm.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "AdminMainForm.h"
#include "DeleteStudentForm.h"
#include "ModifyStudentForm.h"
#include "NewStudentForm.h"
#include "SearchStudentForm.h"
//#include "ViewAll2.h"
//#include "AllStudentView.h"
#include "ViewALLStudents1.h"
#include "StudentsAllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// AdminMainForm dialog


AdminMainForm::AdminMainForm(CWnd* pParent /*=NULL*/)
	: CDialog(AdminMainForm::IDD, pParent)
{
	//{{AFX_DATA_INIT(AdminMainForm)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void AdminMainForm::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(AdminMainForm)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(AdminMainForm, CDialog)
	//{{AFX_MSG_MAP(AdminMainForm)
	ON_BN_CLICKED(IDC_RADIO6, OnRadio6)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_RADIO3, OnRadio3)
	ON_BN_CLICKED(IDC_RADIO4, OnRadio4)
	ON_BN_CLICKED(IDC_RADIO5, OnRadio5)
	ON_BN_CLICKED(IDC_RADIO7, OnRadio7)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// AdminMainForm message handlers

void AdminMainForm::OnRadio6() 
{
	// TODO: Add your control notification handler code here
	CDialog::OnCancel();
	
}

void AdminMainForm::OnRadio1() 
{
	// TODO: Add your control notification handler code here
NewStudentForm obj;
	obj.DoModal();	
}

void AdminMainForm::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	DeleteStudentForm obj;
	obj.DoModal();
}

void AdminMainForm::OnRadio3() 
{
	// TODO: Add your control notification handler code here
//	ViewAll2 obj;
//	AllStudentView obj;
//	obj.DoModal();
}

void AdminMainForm::OnRadio4() 
{
	// TODO: Add your control notification handler code here
	SearchStudentForm obj;
	obj.DoModal();
}

void AdminMainForm::OnRadio5() 
{
	// TODO: Add your control notification handler code here
	ModifyStudentForm obj;
	obj.DoModal();	
}

void AdminMainForm::OnRadio7() 
{
	// TODO: Add your control notification handler code here
//	AllStudentView obj;
//	obj.DoModal();	

	//ViewALLStudents obj;
	StudentsAllView obj;
	obj.DoModal();
}
