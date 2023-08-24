#include "Title.h"

Title::Title()
{

}
Title::~Title()
{

}
SceneBase* Title::Update()
{
	if (PadInput::OnRelease(XINPUT_BUTTON_A))
	{
		return new GameMain();
	}
	return this;
}
void Title::Draw()const
{
	DrawFormatString(100, 200, 0xffffff, "ƒ^ƒCƒgƒ‹‰æ–Ê");
}