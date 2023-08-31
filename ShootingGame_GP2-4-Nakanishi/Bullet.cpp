#include "Bullet.h"
#include "GameMain.h"
#include <math.h>

Bullet::Bullet(float speed, float angle, float acceleration, float angulVelocity,float x,float y, int bullets_flg)
{
	damage = 0;
	this->speed = speed;
	this->angle = angle * DX_PI_F / 180;
	this->acceleration = acceleration;
	this->angulVelocity = angulVelocity;
	this->location.x = x;
	this->location.y = y;
	this->bullets_flg = bullets_flg;
}
Bullet::~Bullet()
{

}
void Bullet::Update()
{
	float moveX = speed * (float)cos(angle);
	float moveY = speed * (float)sin(angle);

	if (bullets_flg == 0)
	{
		location.x += moveX;
		location.y += moveY;
	}
	else if (bullets_flg == 1)
	{
		location.x -= moveX;
		location.y += moveY;
	}
	else
	{
	}
}
void Bullet::Draw()
{
	DrawCircleAA(location.x, location.y, 5.5f, 100, 0x1E6B9A, TRUE);
}
void Bullet::GetDamage()
{
}