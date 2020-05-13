
// DeTaiDDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CDeTaiDDlg dialog
class CDeTaiDDlg : public CDialogEx
{
// Construction
public:
	CDeTaiDDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DETAID_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
protected:
	CButton cb_ql;
	CButton cb_nv;
public:
	afx_msg void OnBnClickedCheckNv();
};