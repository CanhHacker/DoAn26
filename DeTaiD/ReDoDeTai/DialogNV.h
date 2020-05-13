#pragma once


// DialogNV dialog

class DialogNV : public CDialogEx
{
	DECLARE_DYNAMIC(DialogNV)

public:
	DialogNV(CWnd* pParent = NULL);   // standard constructor
	virtual ~DialogNV();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_NV };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
