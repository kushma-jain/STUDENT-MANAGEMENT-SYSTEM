// StudentProject.h : main header file for the STUDENTPROJECT application
//

#if !defined(AFX_STUDENTPROJECT_H__3BF1C499_95D9_48C8_9CC3_BC1B34DE5649__INCLUDED_)
#define AFX_STUDENTPROJECT_H__3BF1C499_95D9_48C8_9CC3_BC1B34DE5649__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CStudentProjectApp:
// See StudentProject.cpp for the implementation of this class
//

class CStudentProjectApp : public CWinApp
{
public:
	CStudentProjectApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudentProjectApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CStudentProjectApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTPROJECT_H__3BF1C499_95D9_48C8_9CC3_BC1B34DE5649__INCLUDED_)
