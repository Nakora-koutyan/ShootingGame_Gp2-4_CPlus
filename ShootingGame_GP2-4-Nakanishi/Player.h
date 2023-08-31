#pragma once
#include "CharaBase.h"
#include "DxLib.h"
#include "BulletsSpawner.h"

class Player :public CharaBase
{
protected:
	int score;
	BulletsSpawner* weapon;

public:
	//コンストラクタ
	Player();
	//デストラクタ
	~Player();
	//描画以外の更新を実装する
	void Update(GameMain *GameMain)override;
	//描画に関することを実装する
	void Draw()override;

	//ダメージを受けた時の処理
	void Hit()override;
	void GetPosition()override;
};

