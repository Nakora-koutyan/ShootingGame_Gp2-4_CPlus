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
	player_class->Update(this);				//Player�N���X��Update��Ǎ��E���s
	enemy_class[9]->Update(this);			//Enemy�N���X��Update��Ǎ��E���s

	if (PadInput::OnRelease(XINPUT_BUTTON_A))
	{
		return new Title();
	}
	return this;

	Draw();
}
void GameMain::Draw() const
{
	DrawFormatString(100, 200, 0xffffff, "�Q�[�����C���V�[��");
	player_class->Draw();				//Player�N���X��Draw��Ǎ��E���s
	enemy_class[9]->Draw();				//Enemy�N���X��Draw��Ǎ��E���s
}
void GameMain::SpawnBullet(float speed, float angle, float acceleration, float angulVelocity)//�e�𐶐�����
{
	new Bullet(speed,angle,acceleration,angulVelocity);
}