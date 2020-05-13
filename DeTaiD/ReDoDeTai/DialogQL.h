#pragma once


// DialogQL dialog

class DialogQL : public CDialogEx
{
	DECLARE_DYNAMIC(DialogQL)

public:
	DialogQL(CWnd* pParent = NULL);   // standard constructor
	virtual ~DialogQL();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_QL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
