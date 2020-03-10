#if !defined(AFX_VIEWALLSTUDENTS1_H__082CAD33_EB60_4266_A8AF_6D9CC708067E__INCLUDED_)
#define AFX_VIEWALLSTUDENTS1_H__082CAD33_EB60_4266_A8AF_6D9CC708067E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ViewALLStudents1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ViewALLStudents dialog

class ViewALLStudents : public CDialog
{
// Construction
public:
	ViewALLStudents(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ViewALLStudents)
	enum { IDD = IDD_VIEWALLSTUDENTS_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ViewALLStudents)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ViewALLStudents)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIEWALLSTUDENTS1_H__082CAD33_EB60_4266_A8AF_6D9CC708067E__INCLUDED_)
