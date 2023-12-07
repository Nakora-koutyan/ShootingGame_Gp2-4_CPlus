#include "Enemy.h"

Enemy::Enemy()
{
	hp = 0;
	point = 0;
	location.x = 900.f;
	location.y = 400.f;

	bullets_flg = 1;

	shoot_timer = 50;
	weapon = new BulletsSpawner;
}
Enemy::~Enemy()
{
}
void Enemy::Update(GameMain* GameMain)
{
	if (shoot_timer <= 0)
	{
		weapon->Shoot(GameMain,45.0f,location.x,location.y);
		shoot_timer = 120;

		bullets_flg = 1;
	}

	if (shoot_timer >= 0)
	{
		shoot_timer -= 1;
	}
}
void Enemy::Draw()
{
	DrawCircleAA(location.x, location.y, 30.5, 100, 0xff0000, TRUE);
}
void Enemy::Hit()
{
}
void Enemy::GetPosition()
{
}
