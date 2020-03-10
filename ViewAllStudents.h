#if !defined(AFX_VIEWALLSTUDENTS_H__1AD48D8B_5634_4044_81D7_316D08C367C9__INCLUDED_)
#define AFX_VIEWALLSTUDENTS_H__1AD48D8B_5634_4044_81D7_316D08C367C9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ViewAllStudents.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ViewAllStudents dialog

class ViewAllStudents : public CDialog
{
// Construction
public:
	ViewAllStudents(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ViewAllStudents)
	enum { IDD = IDD_VIEWALLSTUDENTS_DIALOG };
	CString	m_alldata;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ViewAllStudents)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ViewAllStudents)
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIEWALLSTUDENTS_H__1AD48D8B_5634_4044_81D7_316D08C367C9__INCLUDED_)
