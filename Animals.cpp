#include "Animals.h"
#include <iostream>
namespace object
{
	Animal::Animal() {
		std::cout << "コンストラクタが呼ばれました" << std::endl;
		name_ = "動物";
		footNum_ = 4;
	}

	Animal::Animal(const char* name, int footNum) {
		std::cout << "引数付きコンストラクタが呼ばれました" << std::endl;
		name_ = name;
		footNum = footNum;
	}

	Animal::~Animal()
	{
		std::cout << "デストラクタが呼ばれました" << std::endl;

		name_ = "破棄済み";
		footNum_ = 0;
	}
}

