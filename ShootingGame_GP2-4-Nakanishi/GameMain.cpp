#include "GameMain.h"
#include "PadInput.h"

GameMain::GameMain()
{
	bullets[9] = 0;
	life = 0;

	player_class = new Player;
	enemy_class[9] = new Enemy;
	bullets_spawner = new BulletsSpawner;
}
GameMain::~GameMain()
{
	delete player_class;
	delete enemy_class[9];
	delete bullets_spawner;
}
SceneBase* GameMain::Update()
{
	player_class->Update(this);				//PlayerクラスのUpdateを読込・実行
	enemy_class[9]->Update(this);			//EnemyクラスのUpdateを読込・実行

	if (PadInput::OnRelease(XINPUT_BUTTON_A))
	{
		return new Title();
	}
	return this;

	Draw();
}
void GameMain::Draw() const
{
	DrawFormatString(100, 200, 0xffffff, "ゲームメインシーン");
	player_class->Draw();				//PlayerクラスのDrawを読込・実行
	enemy_class[9]->Draw();				//EnemyクラスのDrawを読込・実行
}
void GameMain::SpawnBullet(float speed, float angle, float acceleration, float angulVelocity)//弾を生成する
{
	new Bullet(speed,angle,acceleration,angulVelocity);
}