#pragma once
#include "DxLib.h"

class Bullet
{
public:
	int damage;			//弾が当たった時のダメージ
	int speed;			//弾の動く速度
	int angle;			//弾の角度
	int acceleration;	//速度の変化量
	int angulVelocity;	//角度の変化量

public:
	
	//コンストラクタ
	Bullet(float speed,float angle, float acceleration,float angulVelocity);

	//デストラクタ
	~Bullet();

	//描画以外の更新を実装する
	void Update();

	//描画に関する更新を実装する
	void Draw();

	//弾が当たったことによるダメージ処理
	void GetDamage();
};

