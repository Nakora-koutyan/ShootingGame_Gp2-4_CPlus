#pragma once
#include "BulletsSpawner.h"
#include "DxLib.h"
#include "PadInput.h"
#include "Bullet.h"

class NwaySpawner :public BulletsSpawner
{
protected:
	int numBullets;
	int baseAngle;
	int angleDiff;

public:
	//�R���X�g���N�^
	NwaySpawner();

	//�f�X�g���N�^
	~NwaySpawner();
	
	//�`��ȊO�̍X�V����������
	void Update()override;

	//�`��Ɋւ���X�V����������
	void Draw()override;

	//�e�̔��ˏ���
	void Shoot(GameMain *GameMain)override;
};

