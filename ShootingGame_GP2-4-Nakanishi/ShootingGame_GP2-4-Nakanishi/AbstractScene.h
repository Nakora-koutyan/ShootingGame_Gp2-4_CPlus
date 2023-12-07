#pragma once

class SceneBase
{
public:

	//デストラクタ
	virtual ~SceneBase() {};

	//描画以外の更新を実装
	virtual SceneBase* Update() = 0;

	//描画に関することを実装
	virtual void Draw() const = 0;
};
