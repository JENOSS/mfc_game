#pragma once
#include "afxext.h"
class CFixedSplitterWnd :
	public CSplitterWnd
{
public:
	CFixedSplitterWnd();
	~CFixedSplitterWnd();
protected:
	//{{AFX_MSG(CFixedSplitterWnd)
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


