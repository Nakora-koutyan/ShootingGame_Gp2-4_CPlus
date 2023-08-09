#pragma once
#include "DxLib.h"

#define BUTTONS (16)
#define STICKL_X (1)
#define STICKL_Y (2)
//�X�e�B�b�N
struct Stick
{
	short ThumbX;	//�����l
	short ThumbY;	//�c���l
};

class PadInput
{
protected:
	char now_key[BUTTONS];	//����̓��̓L�[
	char old_key[BUTTONS];	//�O��̓��̓L�[
	XINPUT_STATE input;		//�p�b�h
	Stick left_stick;		//���X�e�B�b�N

public:
	//�p�b�h���̍X�V
	void UpdateKey()
	{
		GetJoypadXInputState(DX_INPUT_KEY_PAD1, &input);
		for (int i = 0; i < BUTTONS; i++)
		{
			old_key[i] = now_key[i];
			now_key[i] = input.Buttons[i];
		}

		//���X�e�B�b�N
		left_stick.ThumbX = input.ThumbLX;
		left_stick.ThumbY = input.ThumbLY;
	}

	//�{�^���������ꂽ�u��
	bool OnButton(int button);

	//�{�^���������Ă����
	bool OnPressed(int button);

	//�{�^���𗣂����u��
	bool OnRelease(int Button);

	//�X�e�B�b�N�̌X������
	float LeftStickTip(short StickLeft);
};

