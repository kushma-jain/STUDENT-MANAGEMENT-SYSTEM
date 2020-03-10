#if !defined(AFX_NEWSTUDENTFORM_H__D269CC12_68FD_4F9E_ACEA_2250F70E6E12__INCLUDED_)
#define AFX_NEWSTUDENTFORM_H__D269CC12_68FD_4F9E_ACEA_2250F70E6E12__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewStudentForm.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// NewStudentForm dialog

class NewStudentForm : public CDialog
{
// Construction
public:
	NewStudentForm(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(NewStudentForm)
	enum { IDD = IDD_NEWSTUDENTFORM_DIALOG };
	CString	m_rollnum;
	CString	m_studentname;
	CString	m_address;
	CString	m_marks;
	CString	m_dept;
	CString	m_semester;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(NewStudentForm)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(NewStudentForm)
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWSTUDENTFORM_H__D269CC12_68FD_4F9E_ACEA_2250F70E6E12__INCLUDED_)
