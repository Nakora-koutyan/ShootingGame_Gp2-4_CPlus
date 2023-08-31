#include "DxLib.h"
#include "Common.h"
#include "SceneManager.h"
#include "GameMain.h"
#include "Title.h"
#include "PadInput.h"
//メインプログラム開始

int WINAPI WinMain(_In_ HINSTANCE  hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR LpCmdLine, _In_ int NCmdShow)
{
	SetMainWindowText("ShootingGame");				//ウィンドウタイトルを設定

	ChangeWindowMode(TRUE);							//ウィンドウモードで起動

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);	//ウィンドウのサイズ


	if (DxLib_Init() == -1)							//Dxライブラリの初期化処理
	{
		return -1;
	}

	//ゲームループし、シーンマネージャーでシーンの更新
	SetDrawScreen(DX_SCREEN_BACK);					//描画先を裏にする

	//タイトルシーンオブジェクト作成
	SceneManager SceneMng(dynamic_cast<SceneBase*>(new Title()));
	
	while ((ProcessMessage() == 0) && (SceneMng.Update() != nullptr))
	{
		
		PadInput::UpdateKey();	//入力処理

		//強制終了
		if (PadInput::OnButton(XINPUT_BUTTON_BACK))
		{
			break;
		}
		ClearDrawScreen();		//画面の初期化
		SceneMng.Draw();
		ScreenFlip();	//裏画面の内容を表画面に反映する
	};

	DxLib_End();	//Dxライブラリ使用の終了処理
	return 0;		//プログラムの終了
};