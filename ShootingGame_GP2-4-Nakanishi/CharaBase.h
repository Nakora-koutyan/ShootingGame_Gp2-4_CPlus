#pragma once
//クラスの前方宣言
class GameMain;

class CharaBase
{
protected:
	float speed;
	int image;

public:
	//コンストラクタ
	CharaBase();
	//デストラクタ
	~CharaBase();
	//描画以外に関することを実装する
	virtual void Update(GameMain *gamemain);
	//描画に関することを実装する
	virtual void Draw();

	//ダメージを受けた時の処理
	virtual void Hit();
};