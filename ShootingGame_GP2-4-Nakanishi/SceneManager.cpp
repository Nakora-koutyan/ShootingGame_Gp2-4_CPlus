#include "SceneManager.h"

SceneBase* SceneManager::Update()
{
	SceneBase* p = mScene->Update();	//シーンの切り替え(thisの上書き)
	//pはNewScene	//mSceneはOldScene
	if (p != mScene)
	{
		delete mScene;
		mScene = p;
	}
	return this;
}
void SceneManager::Draw() const
{
	mScene->Draw();		//現在のシーンの描画
}