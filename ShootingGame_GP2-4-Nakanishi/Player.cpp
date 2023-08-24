#include "Player.h"
#include "PadInput.h"

Player::Player()
{
	score = 0;
	weapon = 0;
	speed = 0.0f;
	image = 0;

	weapon = new BulletsSpawner;
}
Player::~Player()
{
}
void Player::Update(GameMain* GameMain)
{
	if (PadInput::OnRelease(XINPUT_BUTTON_X))
	{
		weapon->Shoot(GameMain);
	}
}
void Player::Draw()
{
	DrawCircleAA(300.f, 400.f, 30.5, 100, 0xffffff, TRUE);
}
void Player::Hit()
{
}