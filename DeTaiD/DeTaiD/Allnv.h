#pragma once


// Allnv dialog

class Allnv : public CDialogEx
{
	DECLARE_DYNAMIC(Allnv)

public:
	Allnv(CWnd* pParent = NULL);   // standard constructor
	virtual ~Allnv();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
