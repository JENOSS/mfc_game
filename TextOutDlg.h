#pragma once
#include "afxwin.h"
#include "GameOver.h"
#include <locale.h>
#include "testmfc3View.h"
#include "MainFrm.h"
#include "afxcmn.h"


// CTextOutDlg 폼 뷰입니다.

class CTextOutDlg : public CFormView
{
	DECLARE_DYNCREATE(CTextOutDlg)

protected:
	CTextOutDlg();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CTextOutDlg();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORMVIEW };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CListBox m_listRecord;
	int m_nScore;
	CGameOver m_DlgGameOver;
	int m_pop;
	void SaveRecord();
	void MakeGameOverDlg();
	void qsort(int cnt, int* scoreary, CString* strscoreary, CString* nameary);
	void HitScore(int score);
	void MissCount(int cnt);
	int m_nMisscnt;
	void StartDefault();
	afx_msg void OnClickedButtonEdit();
	afx_msg void OnClickedButtonPlay();
	CButton play_button;
//	CProgressCtrl m_Proctl;
	CProgressCtrl m_Proctl1;
	CProgressCtrl m_Proctl2;
	CProgressCtrl m_Proctl3;
	CProgressCtrl m_Proctl4;
	CProgressCtrl m_Proctl5;
};


