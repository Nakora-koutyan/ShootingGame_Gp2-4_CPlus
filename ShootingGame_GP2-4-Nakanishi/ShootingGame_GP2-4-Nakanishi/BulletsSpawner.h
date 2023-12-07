#pragma once
#include "CharaBase.h"
class GameMain;
class BulletsSpawner
{
protected:
	float speed;
	float angle;
	float acceleration;
	float angulVelocity;

public:
	//コンストラクタ
	BulletsSpawner();

	//デストラクタ
	~BulletsSpawner();

	//描画以外の更新を実装する
	virtual void Update();

	//描画に関する更新を実装する
	virtual void Draw();

	//弾を発射するための関数
	virtual void Shoot(GameMain* GameMain, float angle, float x, float y);
};

