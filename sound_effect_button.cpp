#include "stdafx.h"
#include "sound_effect_button.h"


sound_effect_button::sound_effect_button()
	: Music_path(_T(""))
{
}


sound_effect_button::~sound_effect_button()
{
}


void sound_effect_button::play_music()
{
	p1 = AfxBeginThread(ThreadSecond, this);
}


void sound_effect_button::set_music(CString s)
{
	Music_path = s;
}

UINT sound_effect_button::ThreadSecond(LPVOID _mothod)
{
	sound_effect_button *fir = (sound_effect_button*)_mothod;

	CString szSoundPath = (CString)"C:\\Users\\Gram\\Desktop\\pop.wav";;

	PlaySound(szSoundPath, AfxGetInstanceHandle(), SND_NOWAIT);

	return 0;
}
