#pragma once
#include "AbstractScene.h"

//シーンマネージャークラス
//各シーンの切り替えを設定する
class SceneManager : public SceneBase
{
private:
	SceneBase* mScene; //現在のシーン

public:
	//コンストラクタ
	SceneManager(SceneBase* scene):mScene(scene){}

	//デストラクタ
	~SceneManager()
	{
		delete mScene;
	}

	//描画以外に関することを実装する
	SceneBase* Update();

	//描画に関することを実装する
	void Draw()const override;
};

