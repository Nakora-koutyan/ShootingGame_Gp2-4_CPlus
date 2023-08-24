#pragma once
#include "DxLib.h"

class Bullet
{
public:
	int damage;			//�e�������������̃_���[�W
	int speed;			//�e�̓������x
	int angle;			//�e�̊p�x
	int acceleration;	//���x�̕ω���
	int angulVelocity;	//�p�x�̕ω���

public:
	
	//�R���X�g���N�^
	Bullet(float speed,float angle, float acceleration,float angulVelocity);

	//�f�X�g���N�^
	~Bullet();

	//�`��ȊO�̍X�V����������
	void Update();

	//�`��Ɋւ���X�V����������
	void Draw();

	//�e�������������Ƃɂ��_���[�W����
	void GetDamage();
};

