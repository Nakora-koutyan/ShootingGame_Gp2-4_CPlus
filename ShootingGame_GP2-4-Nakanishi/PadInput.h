#pragma once
#include "DxLib.h"

#define BUTTONS (16)
#define STICKL_X (1)
#define STICKL_Y (2)
//スティック
struct Stick
{
	short ThumbX;	//横軸値
	short ThumbY;	//縦軸値
};

class PadInput
{
protected:
	char now_key[BUTTONS];	//今回の入力キー
	char old_key[BUTTONS];	//前回の入力キー
	XINPUT_STATE input;		//パッド
	Stick left_stick;		//左スティック

public:
	//パッド情報の更新
	void UpdateKey()
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
	bool OnButton(int button);

	//ボタンを押している間
	bool OnPressed(int button);

	//ボタンを離した瞬間
	bool OnRelease(int Button);

	//スティックの傾き割合
	float LeftStickTip(short StickLeft);
};

