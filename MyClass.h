#pragma once

// クラス「MyClass」の宣言
class MyClass
{
public:
	// クラスのメンバ関数を宣言と同時に定義する
	void functionA() {
		// メンバ変数を利用できる
		valueA = 1;
	}
	static void functionB() {
		
		valueB = 10;
	}


	int valueA = 0; // メンバ変数「valueA」を宣言し、ゼロで初期化する

	// 静的なメンバ変数
	static inline int valueB;
};

