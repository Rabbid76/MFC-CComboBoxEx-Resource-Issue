
#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"


CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent)
	: CDialogEx(IDD_MFCAPPLICATION1_DIALOG, pParent)
{}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
  DDX_Control(pDX, IDC_COMBO1, m_ctrlComboEx1);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
END_MESSAGE_MAP()

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	for (int i = 0; i<24; i++)	// add useless junk text strings
	{
		COMBOBOXEXITEM	cbei;  memset(&cbei, 0, sizeof(cbei));

		cbei.mask = CBEIF_TEXT;
		cbei.iItem = i;
		cbei.pszText = L"useless junk text string 4 handle leaks";
		cbei.iImage = 0;
		cbei.iSelectedImage = 0;

		m_ctrlComboEx1.InsertItem(&cbei);
	}

	return TRUE;
}
