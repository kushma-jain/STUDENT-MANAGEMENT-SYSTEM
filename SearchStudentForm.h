#if !defined(AFX_SEARCHSTUDENTFORM_H__B9E36DD6_773A_41F8_BBBB_EAB280A227A0__INCLUDED_)
#define AFX_SEARCHSTUDENTFORM_H__B9E36DD6_773A_41F8_BBBB_EAB280A227A0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SearchStudentForm.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// SearchStudentForm dialog

class SearchStudentForm : public CDialog
{
// Construction
public:
	SearchStudentForm(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(SearchStudentForm)
	enum { IDD = IDD_SEARCHSTUDENTFORM_DIALOG };
	CString	m_rno;
	CString	m_sname;
	CString	m_address;
	CString	m_marks;
	CString	m_bucketno;
	CString	m_semester;
	CString	m_department;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(SearchStudentForm)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(SearchStudentForm)
	afx_msg void OnCancel2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SEARCHSTUDENTFORM_H__B9E36DD6_773A_41F8_BBBB_EAB280A227A0__INCLUDED_)
