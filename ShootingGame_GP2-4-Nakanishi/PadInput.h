#pragma once
#include "DxLib.h"

#define BUTTONS (16)
#define STICKL_X (1)
#define STICKL_Y (2)
#define MAX_L_X (32767.f)	//左スティックX軸の最大値(float型)
#define MAX_L_Y (32767.f)	//左スティックY軸の最大値(float型)


//スティック
struct Stick
{
	short ThumbX;	//横軸値
	short ThumbY;	//縦軸値
};

class PadInput
{
protected:
	static char now_key[BUTTONS];	//今回の入力キー
	static char old_key[BUTTONS];	//前回の入力キー
	static XINPUT_STATE input;		//パッド
	static Stick left_stick;		//左スティック

public:
	//パッド情報の更新
	static void UpdateKey();

	//ボタンを押された瞬間
	static bool OnButton(int button);

	//ボタンを押している間
	static bool OnPressed(int button);

	//ボタンを離した瞬間
	static bool OnRelease(int Button);

	//スティックの傾き割合
	static float LeftStickTip(short StickLeft);
};

