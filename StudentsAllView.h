#if !defined(AFX_STUDENTSALLVIEW_H__F4426005_9D33_42AA_B2D2_D401F7305349__INCLUDED_)
#define AFX_STUDENTSALLVIEW_H__F4426005_9D33_42AA_B2D2_D401F7305349__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StudentsAllView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// StudentsAllView dialog

class StudentsAllView : public CDialog
{
// Construction
public:
	StudentsAllView(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(StudentsAllView)
	enum { IDD = IDD_STUDENTSALLVIEW_DIALOG };
	CString	m_allstudents;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(StudentsAllView)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(StudentsAllView)
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTSALLVIEW_H__F4426005_9D33_42AA_B2D2_D401F7305349__INCLUDED_)
