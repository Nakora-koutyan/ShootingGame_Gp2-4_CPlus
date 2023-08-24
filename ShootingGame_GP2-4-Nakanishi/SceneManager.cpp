#include "SceneManager.h"

SceneBase* SceneManager::Update()
{
	SceneBase* p = mScene->Update();	//�V�[���̐؂�ւ�(this�̏㏑��)
	//p��NewScene	//mScene��OldScene
	if (p != mScene)
	{
		delete mScene;
		mScene = p;
	}
	return this;
}
void SceneManager::Draw() const
{
	mScene->Draw();		//���݂̃V�[���̕`��
}