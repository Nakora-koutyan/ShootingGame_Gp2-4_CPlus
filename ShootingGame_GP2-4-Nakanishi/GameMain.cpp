#include "GameMain.h"
#include "Title.h"

GameMain::GameMain()
{
	for (now_bullets = 0; now_bullets < MAX_BALLETS; now_bullets++)
	{
		bullets[now_bullets] = nullptr;		//�e�̃|�C���^�z���NULL��������
	}

	now_bullets = 0;
	life = 0;

	player_class = new Player;
	enemy_class[9] = new Enemy;
	bullets_spawner = new BulletsSpawner;
	bullet = new Bullet(3.0f, 90.0f, 2.0f, 0.0f,300.f,400.f);
}
GameMain::~GameMain()
{
	delete player_class;
	delete enemy_class[9];
	delete bullets_spawner;
	delete bullet;
}
SceneBase* GameMain::Update()
{
	player_class->Update(this);				//Player�N���X��Update��Ǎ��E���s
	enemy_class[9]->Update(this);			//Enemy�N���X��Update��Ǎ��E���s

	for (int i = 0; i < MAX_BALLETS; i++)	//��ʂɕ\������e�̐������[�v����
	{
		if (bullets[i] != nullptr)
		{
			bullets[i]->Update();
		}
	}

	if (PadInput::OnRelease(XINPUT_BUTTON_A))
	{
		return new Title();
	}
	return this;
}
void GameMain::Draw() const
{
	DrawFormatString(100, 200, 0xffffff, "�Q�[�����C���V�[��");
	DrawFormatString(100, 250, 0xffffff, "%d",now_bullets);
	for (int i = 0; i < MAX_BALLETS; i++)	//��ʂɕ\������e�̐������[�v����
	{
		if (bullets[i] != nullptr)
		{
			bullets[i]->Draw();
		}
	}
	player_class->Draw();				//Player�N���X��Draw��Ǎ��E���s
	enemy_class[9]->Draw();				//Enemy�N���X��Draw��Ǎ��E���s
}
void GameMain::SpawnBullet(float speed, float angle, float acceleration, float angulVelocity,float x,float y)
{
	bullets[now_bullets] = new Bullet(speed, angle, acceleration, angulVelocity,x,y);
	if (++now_bullets >= MAX_BALLETS)
	{
		now_bullets = 0;
	}
}