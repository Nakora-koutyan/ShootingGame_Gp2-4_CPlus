#pragma once
#include "AbstractScene.h"
#include "Title.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "BulletsSpawner.h"

class GameMain :public SceneBase
{
private:
	int life;
	Bullet* bullets[90];				//��ʓ��ɕ\���ł���e�̍ő吔

	Player* player_class;				//Player�N���X�̃I�u�W�F�N�g��
	Enemy* enemy_class[10];				//Enemy�N���X�̃I�u�W�F�N�g��(�����F��ʓ��ɕ\���ł���G�̍ő吔)
	BulletsSpawner* bullets_spawner;	//BulletsSpawner�N���X�̃I�u�W�F�N�g��

public:
	//�R���X�g���N�^
	GameMain();
	
	//�f�X�g���N�^
	~GameMain();
	
	//�`��ȊO�̍X�V������
	virtual SceneBase* Update()override;
	
	//�`��Ɋւ��邱�Ƃ�����
	virtual void Draw() const override;

	//�e/�G/�v���C���[�̓����蔻��̃`�F�b�N���s��
	void HitCheck();

	//�e�̔z��ɐV�����f�[�^���쐬����
	void SpawnBullet(float speed,float angle,float acceleration,float angulVelocity);
};

