#include "SceneManager.h"

AbstractScene* SceneManager::Update()
{
	AbstractScene* p = mScene->Update();	//�V�[���̐؂�ւ�(this�̏㏑��)
	//p��NewScene	//mScene��OldScene
	if (p != mScene)
	{
		delete mScene;
		mScene = p;
	}
}
void SceneManager::Draw()const
{
	mScene->Draw();		//���݂̃V�[���̕`��
}