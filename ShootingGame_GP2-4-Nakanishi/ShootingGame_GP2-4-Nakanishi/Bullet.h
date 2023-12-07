#pragma once
#include "DxLib.h"
#include "SphereCollider.h"
class GameMain;

class Bullet :public SphereCollider
{
public:
	int damage;				//�e�������������̃_���[�W
	float speed;			//�e�̓������x
	float angle;			//�e�̊p�x
	float acceleration;		//���x�̕ω���
	float angulVelocity;	//�p�x�̕ω���

public:
	
	//�R���X�g���N�^
	Bullet(float speed, float angle, float acceleration, float angulVelocity, float x, float y, int bullets_flg);

	//�f�X�g���N�^
	~Bullet();

	//�`��ȊO�̍X�V����������
	void Update();

	//�`��Ɋւ���X�V����������
	void Draw();

	//�e�������������Ƃɂ��_���[�W����
	void GetDamage();
};

