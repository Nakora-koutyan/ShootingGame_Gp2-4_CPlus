#pragma once
#include "AbstractScene.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "BulletsSpawner.h"
#include "Common.h"
#include "PadInput.h"

class GameMain : public SceneBase
{
private:
	int life;
	Bullet* bullets[MAX_BALLETS];		//画面内に表示できる弾の最大数
	int now_bullets;					//現在の弾の配列番号

	Player* player_class;				//Playerクラスのオブジェクト化
	Enemy* enemy_class[10];				//Enemyクラスのオブジェクト化(引数：画面内に表示できる敵の最大数)
	BulletsSpawner* bullets_spawner;	//BulletsSpawnerクラスのオブジェクト化
	Bullet* bullet;						//Bulletクラスのオブジェクト化
	
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
	void SpawnBullet(float speed,float angle,float acceleration,float angulVelocity, float x,float y, int bullets_flg);
};

