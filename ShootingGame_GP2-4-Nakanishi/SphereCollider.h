#pragma once
class SphereCollider
{
protected:
	float location;
	float radius;

public:
	//�R���X�g���N�^
	SphereCollider();
	//�f�X�g���N�^
	~SphereCollider();
	//�`��ȊO�Ɋւ��邱�Ƃ̍X�V
	void Update();
	//�`��Ɋւ��邱�Ƃ̍X�V
	void Draw();

	//�����蔻��̊m�F
	int CheckCollision();
};