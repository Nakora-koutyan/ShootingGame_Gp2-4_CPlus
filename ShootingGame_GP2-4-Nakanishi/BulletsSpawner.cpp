#include "BulletsSpawner.h"
#include "GameMain.h"
BulletsSpawner::BulletsSpawner()
{
	speed = 3.0f;
	angle = 90.0f;
	acceleration = 2.0f;
	angulVelocity = 0.0f;
}
BulletsSpawner::~BulletsSpawner()
{
}
void BulletsSpawner::Update()
{
}
void BulletsSpawner::Draw()
{
}
void BulletsSpawner::Shoot(GameMain* game_main)
{
	speed = 3.0f;
	angle = 90.0f;
	acceleration = 2.0f;
	angulVelocity = 0.0f;

	game_main->SpawnBullet(speed,angle,acceleration,angulVelocity);
}