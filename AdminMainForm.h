#if !defined(AFX_ADMINMAINFORM_H__D8E4C9A0_939B_4175_AABD_6FB9BD2CEB27__INCLUDED_)
#define AFX_ADMINMAINFORM_H__D8E4C9A0_939B_4175_AABD_6FB9BD2CEB27__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AdminMainForm.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AdminMainForm dialog

class AdminMainForm : public CDialog
{
// Construction
public:
	AdminMainForm(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AdminMainForm)
	enum { IDD = IDD_ADMINMAINFORM_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AdminMainForm)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AdminMainForm)
	afx_msg void OnRadio6();
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnRadio3();
	afx_msg void OnRadio4();
	afx_msg void OnRadio5();
	afx_msg void OnRadio7();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADMINMAINFORM_H__D8E4C9A0_939B_4175_AABD_6FB9BD2CEB27__INCLUDED_)
