#pragma once
#include "AbstractScene.h"
#include "PadInput.h"

class Title :public SceneBase
{
public:
	//コンストラクタ
	Title();

	//デストラクタ
	~Title();

	//描画以外の更新を実装
	virtual SceneBase* Update()override;

	//描画に関することを実装
	virtual void Draw() const override;
};

