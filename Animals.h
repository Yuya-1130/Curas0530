#pragma once
#include <string>

namespace object {

	class Animal final {
	public:
		// コンストラクタの宣言
		Animal();

		Animal(const char* name, int footNum);

		~Animal();
	public:
		std::string name_ = {};
		int footNum_ = 0;
	};
}



