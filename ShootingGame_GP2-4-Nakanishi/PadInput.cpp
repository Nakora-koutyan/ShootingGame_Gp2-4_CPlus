#include "PadInput.h"

//�֐��̒�`
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

	//���X�e�B�b�N
	left_stick.ThumbX = input.ThumbLX;
	left_stick.ThumbY = input.ThumbLY;
}


//�{�^���������ꂽ�u��
bool PadInput::OnButton(int button)
{
	bool ret = (now_key[button] == 1 && old_key[button] == 0);
	return ret;
}

//�{�^���������Ă����
bool PadInput::OnPressed(int button)
{
	bool ret = (now_key[button == 1]);
	return ret;
}

//�{�^���𗣂����u��
bool PadInput::OnRelease(int button)
{
	bool ret = (now_key[button] == 0 && old_key[button] == 1);
	return ret;
}

//�X�e�B�b�N�̌X������
float PadInput::LeftStickTip(short StickLeft)
{
	if (StickLeft == STICKL_X)
	{
		float ratio_X = input.ThumbLX/MAX_L_X;

		//���X�e�B�b�N�̉���(�ő�l���P�Ƃ�����)�̊���
		return ratio_X;
	}
	else if (StickLeft == STICKL_Y)
	{
		float ratio_Y = input.ThumbLY / MAX_L_Y;

		//���X�e�B�b�N�̏c��(�ő�l���P�Ƃ�����)�̊���
		return ratio_Y;
	}

	return 0;
}