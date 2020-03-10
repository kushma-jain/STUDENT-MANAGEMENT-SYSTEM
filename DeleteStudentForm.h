#if !defined(AFX_DELETESTUDENTFORM_H__3DB1FF69_74FC_471A_A427_E2B78A1F1605__INCLUDED_)
#define AFX_DELETESTUDENTFORM_H__3DB1FF69_74FC_471A_A427_E2B78A1F1605__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DeleteStudentForm.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DeleteStudentForm dialog

class DeleteStudentForm : public CDialog
{
// Construction
public:
	DeleteStudentForm(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DeleteStudentForm)
	enum { IDD = IDD_DELETESTUDENTFORM_DIALOG };
	CString	m_rollno;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DeleteStudentForm)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DeleteStudentForm)
	afx_msg void OnCancel2();
	afx_msg void OnOk2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELETESTUDENTFORM_H__3DB1FF69_74FC_471A_A427_E2B78A1F1605__INCLUDED_)
