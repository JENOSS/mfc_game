
// testmfc3View.h : Ctestmfc3View 클래스의 인터페이스
//

#pragma once

#pragma comment(lib, "winmm.lib")
#include <mmsystem.h>
#include "testmfc3Doc.h"

class Ctestmfc3View : public CView
{
protected: // serialization에서만 만들어집니다.
	Ctestmfc3View();
	DECLARE_DYNCREATE(Ctestmfc3View)

// 특성입니다.
public:
	Ctestmfc3Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);


public:
	virtual ~Ctestmfc3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	
	void Wait(DWORD dwMillisecond);

	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	void MakeCircle();

	void Ellipse_make(CDC* pDC, int next, int x1);
	
	int next_ss[1000];
	int sx1, sx2;// sy1, sy2;

	int next_dd[1000];
	int dx1 = 20, dx2 = 80;// dy1 = 0, dy2 = 0;
	
	int next_ff[1000];
	int fx1, fx2;// fy1, fy2;

	int next_jj[1000];
	int jx1, jx2;// jy1, jy2;

	int next_kk[1000];
	int kx1, kx2;// ky1, ky2;

	int next_ll[1000];
	int lx1, lx2;// ly1, ly2;
	
	int arr_s[500], arr_d[500], arr_f[500], arr_j[500], arr_k[500], arr_l[500];
	
	int grade_ss[3][500];
	int grade_dd[3][500];
	int grade_ff[3][500];
	int grade_jj[3][500];
	int grade_kk[3][500];
	int grade_ll[3][500];

	int Hit_dd;

	
	void music();
	void set_ready();
	
	CString Music_Path_1;
	
	void Edit_music(int *, int *);
	bool end;			
	int mode = 0;		// play / edit 2가지로 나타남
	int count[6];		// 각 키보드에 해당되는 노드 개수
	
	int flow;
	//int count_s = 0, count_d = 0, count_f = 0, count_j = 0, count_k = 0, count_l = 0;
	//int start_d = 0, start_f = 0, start_sp = 0, start_j = 0, start_k = 0;
	//int tape_s[500], tape_d[500], tape_f[500], tape_j[500], tape_k[500], tape_l[500];

	int Edit[6][300];
	int tape_group[6][400];
	CStdioFile fp;
	TCHAR* pFileName;

	void Write_music(int *, int *);
	void Read_music();
	void Ctestmfc3View::Edit_init();

	void Write_File();
	void Write_end();
	afx_msg void OnFileOpen();

	void Ctestmfc3View::HIt_func(int [][500], char, int);
	void ImageSet(CDC* pDC);

	int sred; int dred; int fred;
	int jred; int kred; int lred;

	int sblue, dblue, fblue;
	int jblue, kblue, lblue;

	int sred_flow, dred_flow, fred_flow;
	int jred_flow, kred_flow, lred_flow;

	int sblue_flow, dblue_flow, fblue_flow;
	int jblue_flow, kblue_flow, lblue_flow;

	int scheck, dcheck, fcheck, jcheck, kcheck, lcheck;
	void Ctestmfc3View::Ellipse_color(CDC* pDC, int next, int x, int y, int check);

	void Ctestmfc3View::initCircle(CDC* pDC, int n);

	int largest_count(int count[]);
	
	int max_count;
	int MaxLength();
	int m_nCheckMiss;
	afx_msg void OnEditmusic();
	afx_msg void OnStartmusic();
};

#ifndef _DEBUG  // testmfc3View.cpp의 디버그 버전
inline Ctestmfc3Doc* Ctestmfc3View::GetDocument() const
   { return reinterpret_cast<Ctestmfc3Doc*>(m_pDocument); }
#endif

