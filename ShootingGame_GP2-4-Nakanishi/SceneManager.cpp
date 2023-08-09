#include "SceneManager.h"

AbstractScene* SceneManager::Update()
{
	AbstractScene* p = mScene->Update();	//シーンの切り替え(thisの上書き)
	//pはNewScene	//mSceneはOldScene
	if (p != mScene)
	{
		delete mScene;
		mScene = p;
	}
}
void SceneManager::Draw()const
{
	mScene->Draw();		//現在のシーンの描画
}