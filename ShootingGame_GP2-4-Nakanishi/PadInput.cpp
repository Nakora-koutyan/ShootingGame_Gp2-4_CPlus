#include "PadInput.h"

//関数の定義
char PadInput::now_key[BUTTONS];
char PadInput::old_key[BUTTONS];
XINPUT_STATE PadInput::input;
Stick PadInput::left_stick;

void PadInput::UpdateKey()
{
	GetJoypadXInputState(DX_INPUT_KEY_PAD1, &input);
	for (int i = 0; i < BUTTONS; i++)
	{
		old_key[i] = now_key[i];
		now_key[i] = input.Buttons[i];
	}

	//左スティック
	left_stick.ThumbX = input.ThumbLX;
	left_stick.ThumbY = input.ThumbLY;
}


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
		float ratio_X = input.ThumbLX/MAX_L_X;

		//左スティックの横軸(最大値を１とした時)の割合
		return ratio_X;
	}
	else if (StickLeft == STICKL_Y)
	{
		float ratio_Y = input.ThumbLY / MAX_L_Y;

		//左スティックの縦軸(最大値を１とした時)の割合
		return ratio_Y;
	}

	return 0;
}