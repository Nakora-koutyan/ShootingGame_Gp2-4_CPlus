#pragma once
#include "AbstractScene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ���ݒ肷��
class SceneManager : public SceneBase
{
private:
	SceneBase* mScene; //���݂̃V�[��

public:
	//�R���X�g���N�^
	SceneManager(SceneBase* scene):mScene(scene){}

	//�f�X�g���N�^
	~SceneManager()
	{
		delete mScene;
	}

	//�`��ȊO�Ɋւ��邱�Ƃ���������
	SceneBase* Update();

	//�`��Ɋւ��邱�Ƃ���������
	void Draw()const override;
};

