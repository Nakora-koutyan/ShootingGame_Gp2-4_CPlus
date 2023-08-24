#pragma once
#include "CharaBase.h"
#include "DxLib.h"

class Enemy :public CharaBase
{
protected:
	int hp;
	int point;
	int weapon;

public:
	//コンストラクタ
	Enemy();
	//デストラクタ
	~Enemy();
	//描画以外の更新を実装する
	void Update(GameMain* GameMain)override;
	//描画に関することを実装する
	void Draw()override;

	//ダメージを受けた時の処理
	void Hit()override;
};

