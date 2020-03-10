#if !defined(AFX_ALLSTUDENTVIEW_H__62D38F77_9FE9_4B2A_A46D_6F119C563B2A__INCLUDED_)
#define AFX_ALLSTUDENTVIEW_H__62D38F77_9FE9_4B2A_A46D_6F119C563B2A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AllStudentView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AllStudentView dialog

class AllStudentView : public CDialog
{
// Construction
public:
	AllStudentView(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AllStudentView)
	enum { IDD = IDD_ALLSTUDENTVIEW_DIALOG };
	CString	m_alldata;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AllStudentView)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AllStudentView)
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ALLSTUDENTVIEW_H__62D38F77_9FE9_4B2A_A46D_6F119C563B2A__INCLUDED_)
