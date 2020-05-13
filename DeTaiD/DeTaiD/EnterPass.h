#pragma once


// EnterPass dialog

class EnterPass : public CDialogEx
{
	DECLARE_DYNAMIC(EnterPass)

public:
	EnterPass(CWnd* pParent = NULL);   // standard constructor
	virtual ~EnterPass();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
