#pragma once
#include "SphereCollider.h"
//�N���X�̑O���錾
class GameMain;

class CharaBase :public SphereCollider
{
protected:
	float speed;
	int image;

public:
	//�R���X�g���N�^
	CharaBase();
	//�f�X�g���N�^
	~CharaBase();
	//�`��ȊO�Ɋւ��邱�Ƃ���������
	virtual void Update(GameMain *gamemain);
	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw();
	
	//�_���[�W���󂯂����̏���
	virtual void Hit();
	//���ݍ��W�̎擾
	virtual void GetPosition();
};