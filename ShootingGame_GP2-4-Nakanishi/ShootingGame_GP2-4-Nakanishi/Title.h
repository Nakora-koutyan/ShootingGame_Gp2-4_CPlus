#pragma once
#include "AbstractScene.h"
#include "PadInput.h"

class Title :public SceneBase
{
public:
	//�R���X�g���N�^
	Title();

	//�f�X�g���N�^
	~Title();

	//�`��ȊO�̍X�V������
	virtual SceneBase* Update()override;

	//�`��Ɋւ��邱�Ƃ�����
	virtual void Draw() const override;
};

