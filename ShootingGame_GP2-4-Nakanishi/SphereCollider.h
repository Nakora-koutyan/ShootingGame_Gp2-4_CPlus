#pragma once

struct Location
{
	float x;
	float y;
};
class SphereCollider
{
protected:
	float radius;
	Location location;
	int bullets_flg;		//0:�v���C���[�̒e 1:�G�l�~�[�̒e

public:
	//�����蔻��̊m�F
	int CheckCollision();
};