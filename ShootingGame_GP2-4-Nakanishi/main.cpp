#include "DxLib.h"
#include "Common.h"

//メインプログラム開始

int WINAPI WinMain(_In_ HINSTANCE  hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR LpCmdLine, _In_ int NCmdShow)
{
	SetMainWindowText("ShootingGame");				//ウィンドウタイトルを設定

	ChangeWindowMode(TRUE);							//ウィンドウモードで起動

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);	//ウィンドウのサイズ

	if (DxLib_Init() == -1)							//DXライブラリの初期化
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);					//描画先を裏にする
};