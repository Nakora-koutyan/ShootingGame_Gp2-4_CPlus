#include "DxLib.h"
#include "Common.h"
#include "SceneManager.h"
#include "GameMain.h"
#include "Title.h"
#include "PadInput.h"
//���C���v���O�����J�n

int WINAPI WinMain(_In_ HINSTANCE  hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR LpCmdLine, _In_ int NCmdShow)
{
	SetMainWindowText("ShootingGame");				//�E�B���h�E�^�C�g����ݒ�

	ChangeWindowMode(TRUE);							//�E�B���h�E���[�h�ŋN��

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);	//�E�B���h�E�̃T�C�Y


	if (DxLib_Init() == -1)							//Dx���C�u�����̏���������
	{
		return -1;
	}

	//�Q�[�����[�v���A�V�[���}�l�[�W���[�ŃV�[���̍X�V
	SetDrawScreen(DX_SCREEN_BACK);					//�`���𗠂ɂ���

	//�^�C�g���V�[���I�u�W�F�N�g�쐬
	SceneManager SceneMng(dynamic_cast<SceneBase*>(new Title()));
	
	while ((ProcessMessage() == 0) && (SceneMng.Update() != nullptr))
	{
		
		PadInput::UpdateKey();	//���͏���

		//�����I��
		if (PadInput::OnButton(XINPUT_BUTTON_BACK))
		{
			break;
		}
		ClearDrawScreen();		//��ʂ̏�����
		SceneMng.Draw();
		ScreenFlip();	//����ʂ̓��e��\��ʂɔ��f����
	};

	DxLib_End();	//Dx���C�u�����g�p�̏I������
	return 0;		//�v���O�����̏I��
};