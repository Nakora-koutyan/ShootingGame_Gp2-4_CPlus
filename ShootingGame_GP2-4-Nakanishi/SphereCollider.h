#pragma once
class SphereCollider
{
protected:
	float location;
	float radius;

public:
	//コンストラクタ
	SphereCollider();
	//デストラクタ
	~SphereCollider();
	//描画以外に関することの更新
	void Update();
	//描画に関することの更新
	void Draw();

	//当たり判定の確認
	int CheckCollision();
};