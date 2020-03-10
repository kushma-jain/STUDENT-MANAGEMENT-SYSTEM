// StudentProjectDlg.h : header file
//

#if !defined(AFX_STUDENTPROJECTDLG_H__184BD3C8_23C5_4C5C_95E4_726293F303C8__INCLUDED_)
#define AFX_STUDENTPROJECTDLG_H__184BD3C8_23C5_4C5C_95E4_726293F303C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CStudentProjectDlg dialog

class CStudentProjectDlg : public CDialog
{
// Construction
public:
	CStudentProjectDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CStudentProjectDlg)
	enum { IDD = IDD_STUDENTPROJECT_DIALOG };
	CString	m_adminname;
	CString	m_adminpwd;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudentProjectDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CStudentProjectDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTPROJECTDLG_H__184BD3C8_23C5_4C5C_95E4_726293F303C8__INCLUDED_)
