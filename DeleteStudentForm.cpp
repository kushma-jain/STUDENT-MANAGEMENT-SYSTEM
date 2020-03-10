// DeleteStudentForm.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "DeleteStudentForm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DeleteStudentForm dialog


DeleteStudentForm::DeleteStudentForm(CWnd* pParent /*=NULL*/)
	: CDialog(DeleteStudentForm::IDD, pParent)
{
	//{{AFX_DATA_INIT(DeleteStudentForm)
	m_rollno = _T("");
	//}}AFX_DATA_INIT
}


void DeleteStudentForm::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DeleteStudentForm)
	DDX_Text(pDX, IDC_EDIT1, m_rollno);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DeleteStudentForm, CDialog)
	//{{AFX_MSG_MAP(DeleteStudentForm)
	ON_BN_CLICKED(IDCANCEL2, OnCancel2)
	ON_BN_CLICKED(IDOK2, OnOk2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DeleteStudentForm message handlers

void DeleteStudentForm::OnCancel2() 
{
	// TODO: Add your control notification handler code here
CDialog::OnCancel();	
}

void DeleteStudentForm::OnOk2() 
{
// TODO: Add your control notification handler code here
	
//MessageBox("hi");

//CDialog::OnCancel();
	CStdioFile readFile;
	CStdioFile writeToFile;

	CFileException fileException;
	UpdateData();
	CString rollnum =  m_rollno; 
	MessageBox("roll num = "+ rollnum);
	CString strFilePath = _T("F:\\StudentData.txt");
	//CString outFilePath = _T("F:\\Test1.txt");
	
	CString strLine;
	CString str="";
	int bucket=0, flag=0;

	//writeToFile.Open( outFilePath, CFile::modeCreate|CFile::modeWrite);
			
	//writeToFile.Close();
	
		
	if (readFile.Open(strFilePath, CFile::modeRead, &fileException))
	{
		
		while (readFile.ReadString(strLine))
		{
			//MessageBox(strLine);
			

			//char Output1[50];
			
			//sprintf(Output1, "Str : %s Length = %d", strLine, strLine.GetLength());

			//MessageBox(Output1);
			

			bucket = bucket+1;

			//char Output[20];
//			sprintf(Output, "%s%d", "Bucket " , bucket);

//			MessageBox(Output);
			int i = 0; // substring index to extract
			CString sToken=_T("");
			CStringArray saItems;
			while (AfxExtractSubString(sToken, strLine, i,'&'))
			{   
				saItems.Add( sToken );
				i++;
			}

			
			if(saItems[0] != rollnum)
			{
				CString contents =  saItems[0] + "&" + saItems[1] + "&" + saItems[2] + "&" + saItems[3] + "&" + saItems[4] + "&" + saItems[5];
				char Output[50];
				sprintf(Output, "%s", contents);
				//MessageBox(contents);
				str = str+contents+"\n";
			}else
			{
				flag=1;
			}			
		}

	readFile.Close();		
	}
			int len= str.GetLength();
			char Output[500];
			sprintf(Output, "str = %s len = %d", str, len);
			//MessageBox(Output);		
				
			if(len>0)
			str = str.Left(len-1);

					writeToFile.Open(strFilePath, CFile::modeCreate|CFile::modeWrite);
			
					writeToFile.Close();

				if (writeToFile.Open( strFilePath, CFile::modeCreate|CFile::modeWrite|CFile::modeNoTruncate), &fileException)
				{
					writeToFile.SeekToEnd();
				//writeToFile.WriteString(_T("\n"));
					writeToFile.WriteString(_T(str));
					writeToFile.WriteString(_T("\n"));
					writeToFile.Close();
				}
				
				UpdateData(false);

				if(flag==1)
				{
					MessageBox("Data Deleted Success");
				}
				else
				{
					MessageBox("Sorry Data Not Found");
				}
		
	//readFile.Close();

		
//CDialog::OnCancel();
}

