; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=ModifyStudentForm
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "StudentProject.h"

ClassCount=14
Class1=CStudentProjectApp
Class2=CStudentProjectDlg
Class3=CAboutDlg

ResourceCount=14
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_STUDENTPROJECT_DIALOG
Resource4=IDD_DELETESTUDENTFORM_DIALOG (English (U.S.))
Resource5=IDD_MODIFYSTUDENTFORM_DIALOG (English (U.S.))
Resource6=IDD_ALLSTUDENTVIEW_DIALOG (English (U.S.))
Class4=AdminMainForm
Resource7=IDD_ADMINMAINFORM_DIALOG (English (U.S.))
Class5=NewStudentForm
Resource8=IDD_VIEWALLSTUDENTS_DIALOG (English (U.S.))
Class6=DeleteStudentForm
Resource9=IDD_STUDENTPROJECT_DIALOG (English (U.S.))
Class7=ModifyStudentForm
Resource10=IDD_VIEW_ALL_DIALOG (English (U.S.))
Class8=SearchStudentForm
Resource11=IDD_ABOUTBOX (English (U.S.))
Class9=ViewAllStudents
Resource12=IDD_NEWSTUDENTFORM_DIALOG (English (U.S.))
Class10=View_ALL
Class11=ViewAll2
Class12=AllStudentView
Class13=ViewALLStudents
Resource13=IDD_SEARCHSTUDENTFORM_DIALOG (English (U.S.))
Class14=StudentsAllView
Resource14=IDD_STUDENTSALLVIEW_DIALOG (English (U.S.))

[CLS:CStudentProjectApp]
Type=0
HeaderFile=StudentProject.h
ImplementationFile=StudentProject.cpp
Filter=N

[CLS:CStudentProjectDlg]
Type=0
HeaderFile=StudentProjectDlg.h
ImplementationFile=StudentProjectDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDOK

[CLS:CAboutDlg]
Type=0
HeaderFile=StudentProjectDlg.h
ImplementationFile=StudentProjectDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg


[DLG:IDD_STUDENTPROJECT_DIALOG]
Type=1
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Class=CStudentProjectDlg

[DLG:IDD_STUDENTPROJECT_DIALOG (English (U.S.))]
Type=1
Class=CStudentProjectDlg
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308353
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT2,edit,1350631584

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_ADMINMAINFORM_DIALOG (English (U.S.))]
Type=1
Class=AdminMainForm
ControlCount=8
Control1=IDC_STATIC,static,1350696961
Control2=IDC_STATIC,button,1342177287
Control3=IDC_RADIO1,button,1342177289
Control4=IDC_RADIO2,button,1342177289
Control5=IDC_RADIO4,button,1342177289
Control6=IDC_RADIO5,button,1342177289
Control7=IDC_RADIO6,button,1342177289
Control8=IDC_RADIO7,button,1342177289

[CLS:AdminMainForm]
Type=0
HeaderFile=AdminMainForm.h
ImplementationFile=AdminMainForm.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_RADIO7

[DLG:IDD_NEWSTUDENTFORM_DIALOG (English (U.S.))]
Type=1
Class=NewStudentForm
ControlCount=15
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308353
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT2,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT3,edit,1350631552
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT4,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_EDIT5,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_EDIT7,edit,1350631552

[CLS:NewStudentForm]
Type=0
HeaderFile=NewStudentForm.h
ImplementationFile=NewStudentForm.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK
VirtualFilter=dWC

[DLG:IDD_DELETESTUDENTFORM_DIALOG (English (U.S.))]
Type=1
Class=DeleteStudentForm
ControlCount=5
Control1=IDOK2,button,1342242817
Control2=IDCANCEL2,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308353

[CLS:DeleteStudentForm]
Type=0
HeaderFile=DeleteStudentForm.h
ImplementationFile=DeleteStudentForm.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDOK2

[DLG:IDD_MODIFYSTUDENTFORM_DIALOG (English (U.S.))]
Type=1
Class=ModifyStudentForm
ControlCount=16
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308353
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT2,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT3,edit,1350631552
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT4,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_EDIT5,edit,1350631552
Control14=IDCANCEL3,button,1342242816
Control15=IDC_STATIC,static,1342308352
Control16=IDC_EDIT7,edit,1350631552

[CLS:ModifyStudentForm]
Type=0
HeaderFile=ModifyStudentForm.h
ImplementationFile=ModifyStudentForm.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDOK

[DLG:IDD_SEARCHSTUDENTFORM_DIALOG (English (U.S.))]
Type=1
Class=SearchStudentForm
ControlCount=17
Control1=IDOK,button,1342242817
Control2=IDCANCEL2,button,1342242816
Control3=IDC_STATIC,static,1342308353
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT2,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT3,edit,1350631552
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT4,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_EDIT5,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_EDIT6,edit,1350631552
Control16=IDC_STATIC,static,1342308352
Control17=IDC_EDIT7,edit,1350631552

[CLS:SearchStudentForm]
Type=0
HeaderFile=SearchStudentForm.h
ImplementationFile=SearchStudentForm.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDOK

[DLG:IDD_VIEWALLSTUDENTS_DIALOG (English (U.S.))]
Type=1
Class=ViewALLStudents
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631552

[CLS:ViewAllStudents]
Type=0
HeaderFile=ViewAllStudents.h
ImplementationFile=ViewAllStudents.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDOK

[DLG:IDD_VIEW_ALL_DIALOG (English (U.S.))]
Type=1
Class=View_ALL
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:View_ALL]
Type=0
HeaderFile=View_ALL.h
ImplementationFile=View_ALL.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK

[CLS:ViewAll2]
Type=0
HeaderFile=ViewAll2.h
ImplementationFile=ViewAll2.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDCANCEL

[DLG:IDD_ALLSTUDENTVIEW_DIALOG (English (U.S.))]
Type=1
Class=AllStudentView
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:AllStudentView]
Type=0
HeaderFile=AllStudentView.h
ImplementationFile=AllStudentView.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDOK

[CLS:ViewALLStudents]
Type=0
HeaderFile=ViewALLStudents1.h
ImplementationFile=ViewALLStudents1.cpp
BaseClass=CDialog
Filter=D

[DLG:IDD_STUDENTSALLVIEW_DIALOG (English (U.S.))]
Type=1
Class=StudentsAllView
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631556

[CLS:StudentsAllView]
Type=0
HeaderFile=StudentsAllView.h
ImplementationFile=StudentsAllView.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDOK

