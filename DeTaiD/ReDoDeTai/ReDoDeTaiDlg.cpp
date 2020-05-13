
// ReDoDeTaiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ReDoDeTai.h"
#include "ReDoDeTaiDlg.h"
#include "afxdialogex.h"
#include "DialogQL.h"
#include "DialogNV.h"

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


// CReDoDeTaiDlg dialog



CReDoDeTaiDlg::CReDoDeTaiDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_REDODETAI_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CReDoDeTaiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK_QL, cb_ql);
	DDX_Control(pDX, IDC_CHECK_Nv, cb_nv);
}

BEGIN_MESSAGE_MAP(CReDoDeTaiDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CReDoDeTaiDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CReDoDeTaiDlg message handlers

BOOL CReDoDeTaiDlg::OnInitDialog()
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

void CReDoDeTaiDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CReDoDeTaiDlg::OnPaint()
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
HCURSOR CReDoDeTaiDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CReDoDeTaiDlg::OnBnClickedButton1()
{
	UpdateData(true);
	int ql = cb_ql.GetCheck();
	int nv = cb_nv.GetCheck();
	bool is_loginQL = false;
	bool is_loginNV = false;

	CString str_ql = _T(" ");
	CString str_nv = _T(" ");

	if (ql == 1) {
		
		is_loginQL = true;

	}
	else if (nv == 1) {
		
		is_loginNV = true;
	}

	if (is_loginQL) {
		str_ql = _T(" Quan ly ");
		CString str_info = _T("He can use: ");
		str_info += str_ql;
		MessageBox(str_info, _T("Info"));
		DialogQL QuanLy;
		QuanLy.DoModal();
	}
	else if (is_loginNV) {
		str_nv = _T(" Nhan vien ");
		CString str_info = _T("He can use: ");
		str_info += str_nv;
		MessageBox(str_info, _T("Info"));
		DialogNV NhanVien;
		NhanVien.DoModal();
	}
	// TODO: Add your control notification handler code here
}
