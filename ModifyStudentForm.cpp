// ModifyStudentForm.cpp : implementation file
//

#include "stdafx.h"
#include "StudentProject.h"
#include "ModifyStudentForm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ModifyStudentForm dialog


ModifyStudentForm::ModifyStudentForm(CWnd* pParent /*=NULL*/)
	: CDialog(ModifyStudentForm::IDD, pParent)
{
	//{{AFX_DATA_INIT(ModifyStudentForm)
	m_rno = _T("");
	m_sname = _T("");
	m_address = _T("");
	m_marks = _T("");
	m_semester = _T("");
	m_department = _T("");
	//}}AFX_DATA_INIT
}


void ModifyStudentForm::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ModifyStudentForm)
	DDX_Text(pDX, IDC_EDIT1, m_rno);
	DDX_Text(pDX, IDC_EDIT2, m_sname);
	DDX_Text(pDX, IDC_EDIT4, m_address);
	DDX_Text(pDX, IDC_EDIT5, m_marks);
	DDX_Text(pDX, IDC_EDIT3, m_semester);
	DDX_Text(pDX, IDC_EDIT7, m_department);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ModifyStudentForm, CDialog)
	//{{AFX_MSG_MAP(ModifyStudentForm)
	ON_BN_CLICKED(IDCANCEL3, OnCancel3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ModifyStudentForm message handlers

void ModifyStudentForm::OnCancel() 
{
	// TODO: Add extra cleanup here
	//Go Back Button	
	CDialog::OnCancel();
}

void ModifyStudentForm::OnCancel3() 
{
	// TODO: Add your control notification handler code here
//MessageBox("Search");	


	CStdioFile readFile;
	CFileException fileException;
	UpdateData();
	CString rollnum =  m_rno; 
	//MessageBox("roll num = "+ rollnum);
	CString strFilePath = _T("F:\\StudentData.txt");
	
	
	CString strLine;
	
	if (readFile.Open(strFilePath, CFile::modeRead, &fileException))
	{
		int flag=0;
		int bucket=0;
		while (readFile.ReadString(strLine))
		{
			//MessageBox(strLine);
			CString sToken=_T("");
			CStringArray saItems;
			//bucket = bucket+1;

//			char Output[20];
			//sprintf(Output, "%s%d", "Bucket " , bucket);

			//MessageBox(Output);
			int i = 0; // substring index to extract
			while (AfxExtractSubString(sToken, strLine, i,'&'))
			{   
				//.. 
				//work with sToken
				//..
				
				saItems.Add( sToken );
				i++;
			}

			CString str= "Rno : " + rollnum + " Roll Num : " + saItems[0];
//			MessageBox(_T(saItems[0]).GetLength());
//			MessageBox("Rno : " + (rollnum.GetLength()));
			
			if(saItems[0] == rollnum)
			{
				flag=1;
				m_sname = saItems[1];
				m_semester = saItems[2];
				m_department = saItems[3];
				m_address = saItems[4];
				m_marks = saItems[5];
			//	m_bucketno=Output;
				UpdateData(false);
				//MessageBox(str);
			
			}
			
			
			if(flag==1)
			{
				MessageBox("Search Found");
				break;
			}
		
		}
		
		if(flag==0)
		{
			MessageBox("Sorry Data Not Found");
		}
	}
	else
	{
		CString strErrorMsg;
		strErrorMsg.Format(_T("Can't open file %s , error : %u"), strFilePath, fileException.m_cause);
		AfxMessageBox(strErrorMsg);
	}
	
//	readFile.Close();
}

void ModifyStudentForm::OnOK() 
{
	CStdioFile readFile;
	CStdioFile writeToFile;

	CFileException fileException;
	UpdateData();
	CString rollnum =  m_rno; 
	//MessageBox("roll num = "+ rollnum);
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
			
			//bucket = bucket+1;

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

/*				CString contents =  saItems[0] + "&" + saItems[1] + "&" + saItems[2] + "&" + saItems[3] + "&" + saItems[4];
				char Output[50];
				sprintf(Output, "%s", contents);
				str = str+contents+"\n";
				MessageBox(Output);
*/			
			
			if(saItems[0] == rollnum)
			{
				flag=1;
				CString contents =  saItems[0] + "&" + m_sname + "&" + m_semester + "&" + m_department + "&" + m_address + "&" + m_marks;
				char Output[50];
				sprintf(Output, "%s", contents);
				//MessageBox(Output);
				//MessageBox(contents);
				str = str+Output+"\n";
				//str = str+Output;
				//MessageBox(str);
			}else
			{
				CString contents =  saItems[0] + "&" + saItems[1] + "&" + saItems[2] + "&" + saItems[3] + "&" + saItems[4] + "&" + saItems[5];
				char Output[50];
				sprintf(Output, "%s", contents);
				//MessageBox(Output);
				//MessageBox(contents);
				str = str+Output+"\n";
				//MessageBox(str);
			}
			
		}

	readFile.Close();
		//char Output[50];
		//sprintf(Output, "Str = %s", str);

		//MessageBox("Hi");
	//MessageBox(str);	
	}
						
			//if (writeToFile.Open( outFilePath, CFile::modeCreate|CFile::modeWrite|CFile::modeNoTruncate), &fileException)
			//	{
			//		writeToFile.SeekToEnd();
				//writeToFile.WriteString(_T("\n"));
			//		writeToFile.WriteString(_T(str));
			//		writeToFile.WriteString(_T("\n"));
			//		writeToFile.Close();
			//	}
				

					int len = str.GetLength();

					CString str1 = str.Left(len-1);	
	
					writeToFile.Open(strFilePath, CFile::modeCreate|CFile::modeWrite);
			
					writeToFile.Close();

				if (writeToFile.Open( strFilePath, CFile::modeCreate|CFile::modeWrite|CFile::modeNoTruncate), &fileException)
				{
					writeToFile.SeekToEnd();
				//writeToFile.WriteString(_T("\n"));
					writeToFile.WriteString(_T(str1));
					writeToFile.WriteString(_T("\n"));
					writeToFile.Close();
				}
				
				UpdateData(false);

				if(flag==0)
				{
					MessageBox("Data Not Updated, Sorry");
				}
				else
				{
					MessageBox("Data Updated Success");
				}

  }
