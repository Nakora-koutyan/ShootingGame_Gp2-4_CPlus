#pragma once
#include "CharaBase.h"
class GameMain;
class BulletsSpawner
{
protected:
	float speed;
	float angle;
	float acceleration;
	float angulVelocity;

public:
	//�R���X�g���N�^
	BulletsSpawner();

	//�f�X�g���N�^
	~BulletsSpawner();

	//�`��ȊO�̍X�V����������
	virtual void Update();

	//�`��Ɋւ���X�V����������
	virtual void Draw();

	//�e�𔭎˂��邽�߂̊֐�
	virtual void Shoot(GameMain* GameMain, float angle, float x, float y);
};

