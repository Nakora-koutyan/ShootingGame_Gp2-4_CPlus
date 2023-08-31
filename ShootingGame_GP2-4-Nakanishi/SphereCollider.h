#pragma once

struct Location
{
	float x;
	float y;
};
class SphereCollider
{
protected:
	float radius;
	Location location;
	int bullets_flg;		//0:プレイヤーの弾 1:エネミーの弾

public:
	//当たり判定の確認
	int CheckCollision();
};