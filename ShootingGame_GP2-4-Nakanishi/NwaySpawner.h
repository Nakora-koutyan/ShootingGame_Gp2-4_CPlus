#pragma once
#include "BulletsSpawner.h"
#include "DxLib.h"
#include "PadInput.h"
#include "Bullet.h"

class NwaySpawner :public BulletsSpawner
{
protected:
	int numBullets;
	int baseAngle;
	int angleDiff;

public:
	//コンストラクタ
	NwaySpawner();

	//デストラクタ
	~NwaySpawner();
	
	//描画以外の更新を実装する
	void Update()override;

	//描画に関する更新を実装する
	void Draw()override;

	//弾の発射処理
	void Shoot(GameMain *GameMain)override;
};

