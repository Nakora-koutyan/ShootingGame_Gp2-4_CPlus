#pragma once
#include "CharaBase.h"
#include "DxLib.h"
#include "BulletsSpawner.h"

class Player :public CharaBase
{
protected:
	int score;
	BulletsSpawner* weapon;

public:
	//�R���X�g���N�^
	Player();
	//�f�X�g���N�^
	~Player();
	//�`��ȊO�̍X�V����������
	void Update(GameMain *GameMain)override;
	//�`��Ɋւ��邱�Ƃ���������
	void Draw()override;

	//�_���[�W���󂯂����̏���
	void Hit()override;
	void GetPosition()override;
};

