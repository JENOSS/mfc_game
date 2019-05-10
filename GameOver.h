#pragma once


// CGameOver 대화 상자입니다.

class CGameOver : public CDialogEx
{
	DECLARE_DYNAMIC(CGameOver)

public:
	CGameOver(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CGameOver();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	//afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	CString m_strName;
	int m_nScore;

};
