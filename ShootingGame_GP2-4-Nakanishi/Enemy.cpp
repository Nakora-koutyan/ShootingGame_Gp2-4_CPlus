#include "Enemy.h"

Enemy::Enemy()
{
	hp = 0;
	point = 0;
	weapon = 0;
}
Enemy::~Enemy()
{
}
void Enemy::Update(GameMain* GameMain)
{
}
void Enemy::Draw()
{
	DrawCircleAA(700.f, 400.f, 30.5, 100, 0xff0000, TRUE);
}
void Enemy::Hit()
{
}
