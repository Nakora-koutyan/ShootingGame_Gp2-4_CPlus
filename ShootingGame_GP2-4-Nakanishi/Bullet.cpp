#include "Bullet.h"

Bullet::Bullet(float speed, float angle, float acceleration, float angulVelocity)
{
	damage = 0;
	this->speed = speed;
	this->angle = angle;
	this->acceleration = acceleration;
	this->angulVelocity = angulVelocity;
}
Bullet::~Bullet()
{
}
void Bullet::Update()
{
}
void Bullet::Draw()
{
	DrawCircleAA(331.f, 400.f, 5.5f, 100, 0x1E6B9A, TRUE);
}
void Bullet::GetDamage()
{
}