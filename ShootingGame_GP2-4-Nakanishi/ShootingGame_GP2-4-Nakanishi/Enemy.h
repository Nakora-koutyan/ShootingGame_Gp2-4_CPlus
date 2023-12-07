#pragma once
#include "CharaBase.h"
#include "DxLib.h"
#include "BulletsSpawner.h"

class Enemy :public CharaBase
{
protected:
	int hp;
	int point;
	int shoot_timer;
	
	BulletsSpawner* weapon;

public:
	//�R���X�g���N�^
	Enemy();
	//�f�X�g���N�^
	~Enemy();
	//�`��ȊO�̍X�V����������
	void Update(GameMain* GameMain)override;
	//�`��Ɋւ��邱�Ƃ���������
	void Draw()override;

	//�_���[�W���󂯂����̏���
	void Hit()override;
	//���ݍ��W�̎擾
	void GetPosition()override;
};

