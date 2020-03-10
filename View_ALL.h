#if !defined(AFX_VIEW_ALL_H__D0F76360_D28E_42C3_8EDA_F82C33CC9A5E__INCLUDED_)
#define AFX_VIEW_ALL_H__D0F76360_D28E_42C3_8EDA_F82C33CC9A5E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// View_ALL.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// View_ALL dialog

class View_ALL : public CDialog
{
// Construction
public:
	View_ALL(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(View_ALL)
	enum { IDD = IDD_VIEW_ALL_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(View_ALL)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(View_ALL)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIEW_ALL_H__D0F76360_D28E_42C3_8EDA_F82C33CC9A5E__INCLUDED_)
