

#include <iostream>
#include <string>
#include "Animals.h"


int main()
{
	//　アニマルのインスタンスを作成する
	object::Animal animal;

	object::Animal animal2("猛獣",2);

	std::cout << "スコープを抜ける" << std::endl;
}

