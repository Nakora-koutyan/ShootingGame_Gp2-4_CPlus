#pragma once
#include "DxLib.h"
#include "SphereCollider.h"
class GameMain;

class Bullet :public SphereCollider
{
public:
	int damage;				//弾が当たった時のダメージ
	float speed;			//弾の動く速度
	float angle;			//弾の角度
	float acceleration;		//速度の変化量
	float angulVelocity;	//角度の変化量

public:
	
	//コンストラクタ
	Bullet(float speed, float angle, float acceleration, float angulVelocity, float x, float y, int bullets_flg);

	//デストラクタ
	~Bullet();

	//描画以外の更新を実装する
	void Update();

	//描画に関する更新を実装する
	void Draw();

	//弾が当たったことによるダメージ処理
	void GetDamage();
};

