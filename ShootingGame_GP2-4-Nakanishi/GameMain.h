#pragma once
#include "AbstractScene.h"
#include "Title.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "BulletsSpawner.h"

class GameMain :public SceneBase
{
private:
	int life;
	Bullet* bullets[90];				//画面内に表示できる弾の最大数

	Player* player_class;				//Playerクラスのオブジェクト化
	Enemy* enemy_class[10];				//Enemyクラスのオブジェクト化(引数：画面内に表示できる敵の最大数)
	BulletsSpawner* bullets_spawner;	//BulletsSpawnerクラスのオブジェクト化

public:
	//コンストラクタ
	GameMain();
	
	//デストラクタ
	~GameMain();
	
	//描画以外の更新を実装
	virtual SceneBase* Update()override;
	
	//描画に関することを実装
	virtual void Draw() const override;

	//弾/敵/プレイヤーの当たり判定のチェックを行う
	void HitCheck();

	//弾の配列に新しくデータを作成する
	void SpawnBullet(float speed,float angle,float acceleration,float angulVelocity);
};

