#pragma once
#pragma comment(lib, "winmm")
#include <mmsystem.h>

#include <thread>

class sound_effect_button
{
public:
	sound_effect_button();
	~sound_effect_button();
	CString Music_path;
	void play_music();
	void set_music(CString s);
	CWinThread *p1 = NULL;
	static UINT sound_effect_button::ThreadSecond(LPVOID _mothod);
};

