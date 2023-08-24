#pragma once
#include "DxLib.h"

#define BUTTONS (16)
#define STICKL_X (1)
#define STICKL_Y (2)
#define MAX_L_X (32767.f)	//���X�e�B�b�NX���̍ő�l(float�^)
#define MAX_L_Y (32767.f)	//���X�e�B�b�NY���̍ő�l(float�^)


//�X�e�B�b�N
struct Stick
{
	short ThumbX;	//�����l
	short ThumbY;	//�c���l
};

class PadInput
{
protected:
	static char now_key[BUTTONS];	//����̓��̓L�[
	static char old_key[BUTTONS];	//�O��̓��̓L�[
	static XINPUT_STATE input;		//�p�b�h
	static Stick left_stick;		//���X�e�B�b�N

public:
	//�p�b�h���̍X�V
	static void UpdateKey();

	//�{�^���������ꂽ�u��
	static bool OnButton(int button);

	//�{�^���������Ă����
	static bool OnPressed(int button);

	//�{�^���𗣂����u��
	static bool OnRelease(int Button);

	//�X�e�B�b�N�̌X������
	static float LeftStickTip(short StickLeft);
};

