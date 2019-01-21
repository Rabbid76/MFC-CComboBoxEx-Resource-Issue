#pragma once

class CMFCApplication1Dlg : public CDialogEx
{
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);

  virtual void DoDataExchange( CDataExchange* pDX );

	CComboBoxEx m_ctrlComboEx1;

	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
};
