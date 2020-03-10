#if !defined(AFX_VIEWALL2_H__ED3CD1B4_375C_469E_A877_2D34A7E902A7__INCLUDED_)
#define AFX_VIEWALL2_H__ED3CD1B4_375C_469E_A877_2D34A7E902A7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ViewAll2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ViewAll2 dialog

class ViewAll2 : public CDialog
{
// Construction
public:
	ViewAll2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ViewAll2)
	enum { IDD = IDD_DIALOG1 };
	CString	m_alldata;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ViewAll2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ViewAll2)
	virtual void OnCancel();
	afx_msg void OnCancel4();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIEWALL2_H__ED3CD1B4_375C_469E_A877_2D34A7E902A7__INCLUDED_)
