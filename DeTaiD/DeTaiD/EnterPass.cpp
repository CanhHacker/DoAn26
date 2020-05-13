// EnterPass.cpp : implementation file
//

#include "stdafx.h"
#include "DeTaiD.h"
#include "EnterPass.h"
#include "afxdialogex.h"


// EnterPass dialog

IMPLEMENT_DYNAMIC(EnterPass, CDialogEx)

EnterPass::EnterPass(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

EnterPass::~EnterPass()
{
}

void EnterPass::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(EnterPass, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &EnterPass::OnBnClickedButton1)
END_MESSAGE_MAP()


// EnterPass message handlers



