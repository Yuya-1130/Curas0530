

#include <iostream>


class printStatus final
{
private:

	std::string name_ = {};
	int hp_ = 0;
	int attack_ = 0;

public:
	printStatus();

	printStatus(const char* name, int hp, int attack);
};

printStatus::printStatus() {

	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = "動物";
	hp_ = 100;
	attack_ = 10;
}
 

printStatus::printStatus(const char* name, int hp, int attack) {
	name_ = name;
	hp_ = hp;
	attack_ = attack;

	std::cout << "コンストラクタが呼ばれました" << std::endl;
}

int main()
{
	printStatus PrintStatus;
	printStatus PrintStatus1("動物", 100, 10);
}

