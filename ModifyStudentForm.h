#if !defined(AFX_MODIFYSTUDENTFORM_H__F0DF6B21_C042_4ABE_951C_7A2C29C82D07__INCLUDED_)
#define AFX_MODIFYSTUDENTFORM_H__F0DF6B21_C042_4ABE_951C_7A2C29C82D07__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModifyStudentForm.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ModifyStudentForm dialog

class ModifyStudentForm : public CDialog
{
// Construction
public:
	ModifyStudentForm(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ModifyStudentForm)
	enum { IDD = IDD_MODIFYSTUDENTFORM_DIALOG };
	CString	m_rno;
	CString	m_sname;
	CString	m_address;
	CString	m_marks;
	CString	m_semester;
	CString	m_department;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ModifyStudentForm)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ModifyStudentForm)
	virtual void OnCancel();
	afx_msg void OnCancel3();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODIFYSTUDENTFORM_H__F0DF6B21_C042_4ABE_951C_7A2C29C82D07__INCLUDED_)
