#include "PadInput.h"

//ボタンを押された瞬間
bool PadInput::OnButton(int button)
{
	bool ret = (now_key[button] == 1 && old_key[button] == 0);
	return ret;
}

//ボタンを押している間
bool PadInput::OnPressed(int button)
{
	bool ret = (now_key[button == 1]);
	return ret;
}

//ボタンを離した瞬間
bool PadInput::OnRelease(int button)
{
	bool ret = (now_key[button] == 0 && old_key[button] == 1);
	return ret;
}

//スティックの傾き割合
float PadInput::LeftStickTip(short StickLeft)
{
	if (StickLeft == STICKL_X)
	{
		float 
	}
}