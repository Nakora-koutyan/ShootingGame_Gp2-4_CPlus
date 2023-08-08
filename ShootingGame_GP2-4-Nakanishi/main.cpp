#include "DxLib.h"
#include "Common.h"

//���C���v���O�����J�n

int WINAPI WinMain(_In_ HINSTANCE  hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR LpCmdLine, _In_ int NCmdShow)
{
	SetMainWindowText("ShootingGame");				//�E�B���h�E�^�C�g����ݒ�

	ChangeWindowMode(TRUE);							//�E�B���h�E���[�h�ŋN��

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);	//�E�B���h�E�̃T�C�Y

	if (DxLib_Init() == -1)							//DX���C�u�����̏�����
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);					//�`���𗠂ɂ���
};