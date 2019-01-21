#pragma once

class CMFCApplication1Dlg : public CDialogEx
{
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);

  virtual void DoDataExchange( CDataExchange* pDX );

	HICON m_hIcon;
	CComboBoxEx m_ctrlComboEx1;

	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
};
