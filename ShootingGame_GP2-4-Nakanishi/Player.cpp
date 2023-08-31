#include "Player.h"
#include "PadInput.h"

Player::Player()
{
	score = 0;
	weapon = 0;
	speed = 0.0f;
	image = 0;
	location.x= 300.f;
	location.y = 400.f;

	bullets_flg = 0;

	weapon = new BulletsSpawner;
}
Player::~Player()
{
}
void Player::Update(GameMain* GameMain)
{
	if (PadInput::OnButton(XINPUT_BUTTON_X))
	{
		weapon->Shoot(GameMain,0.0f,location.x,location.y);

		bullets_flg = 0;
	}
}
void Player::Draw()
{
	DrawCircleAA(location.x, location.y, 30.5, 100, 0xffffff, TRUE);
}
void Player::Hit()
{

}
void Player::GetPosition()
{

}