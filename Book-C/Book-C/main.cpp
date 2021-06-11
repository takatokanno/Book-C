#include <stdio.h>
#include <stdlib.h>// メモリ確保用
// 初期化処理
void initialize();
// 更新処理
void update();
// 終了処理
void finalize();

char* player = nullptr;// ポインタ

int main()
{
	initialize();
	update();
	finalize();

	return 0;
}

void initialize()
{
	// ゲーム開始時の最初の情報を設定する
	// モデルの読み込み
	// テクスチャの読み込み
	// セーブデータの読み込み
	// プレイヤー情報の設定
	// エネミー情報の設定
	// フィールド情報の設定
	// etc...

	// メモリの確保
	player = (char*)malloc(sizeof(char) * 10);// char型10個分のメモリを確保する
}

void update() 
{
	// ゲーム起動中の更新処理
	bool isLoop = true;// bool型は要はフラグ。(true(1)/false(0))の値をとる。(真/偽)
	char input;
	while (isLoop)
	{
		input = getchar();// 入力待機処理

		// メインループ
		// qキーが入力されたら終了
		if (input == 'q') {
			isLoop = false;
		}

	}
}

void finalize() 
{
	// ゲーム終了時の処理
	// モデルデータの解放
	// テクスチャデータの解放
	// メモリの解放
	// etc...

	// メモリの解放
	free(player);
}
