#include "PadInput.h"

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
		float 
	}
}