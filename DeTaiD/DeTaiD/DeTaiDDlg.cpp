﻿
// DeTaiDDlg.cpp : implementation file
//

#include "stdafx.h"
#include "DeTaiD.h"
#include "DeTaiDDlg.h"
#include "afxdialogex.h"
#include "EnterPass.h"
#include "Allnv.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CDeTaiDDlg dialog



CDeTaiDDlg::CDeTaiDDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DETAID_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDeTaiDDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK_QL, cb_ql);
	DDX_Control(pDX, IDC_CHECK_NV, cb_nv);
}

BEGIN_MESSAGE_MAP(CDeTaiDDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CDeTaiDDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_CHECK_NV, &CDeTaiDDlg::OnBnClickedCheckNv)
END_MESSAGE_MAP()


// CDeTaiDDlg message handlers

BOOL CDeTaiDDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CDeTaiDDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDeTaiDDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDeTaiDDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CDeTaiDDlg::OnBnClickedButton1()
{
	UpdateData(true);
	int ql = cb_ql.GetCheck();
	int nv = cb_nv.GetCheck();

	CString str_ql = _T(" ");
	CString str_nv = _T(" ");

	bool is_loginQL = false;
	bool is_loginNV = false;
	if (ql == 1) {
		is_loginQL = true;
	}
	else if (ql == 1) {
		is_loginQL = true;
	}



	if (is_loginQL) {		//chỗ này là chỗ nếu đúng thì xử lý
		str_ql = _T(" Quan ly ");
		CString str_info = _T("He can use: ");
		str_info += str_ql;
		MessageBox(str_info, _T("Info"));

		EnterPass Pass;
		Pass.DoModal();
	}
	else if(is_loginNV)  {		//Nếu sai
		str_nv = _T(" Nhan vien ");
		CString str_info = _T("He can use: ");
		str_info += str_nv;
		MessageBox(str_info, _T("Info"));
		Allnv AllNV;
		AllNV.DoModal();
	}
	else {
		MessageBox(_T("Login Failed!!!"), _T("Info"), MB_OK | MB_ICONERROR);
	}

	/*if (ql == 1) str_ql = _T(" Quan ly ");
	else if (nv == 1) str_nv = _T(" Nhan vien ");

	CString str_info = _T("He can use: ");
	str_info += str_ql;
	str_info += str_nv;

	MessageBox(str_info, _T("Info"));*/
	// TODO: Add your control notification handler code here
}


