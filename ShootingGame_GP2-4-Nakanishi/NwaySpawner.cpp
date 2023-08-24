#include "NwaySpawner.h"
#include "GameMain.h"

NwaySpawner::NwaySpawner()
{
	numBullets = 0;
	baseAngle = 0;
	angleDiff = 0;

	//bullet[89] = new Bullet;
	for (int i = 0; i < 89; i++)
	{
		//bullet[i] = 0;
	}
}
NwaySpawner::~NwaySpawner()
{
}
void NwaySpawner::Update()
{
}
void NwaySpawner::Draw()
{
}
void NwaySpawner::Shoot(GameMain* GameMain)
{
	for (int i = 0; i < 89; i++)
	{
		//GameMain->SpawnBullet();
		//bullet[i] = new Bullet();
	}
}