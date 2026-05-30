#include <iostream>

class Status
{
	private:
	std::string name_ = {};
	int hp_ = 0;
	int attack_ = 0;

public:
	void charstatusA(std::string name, int hp, int attack); // 引数付き宣言に修正

	void charstatusB();
};

void Status::charstatusA(std::string name, int hp, int attack) {
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = name;
	hp_ = hp;
	attack_ = attack;
}

void Status::charstatusB() {
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = "動物";
	hp_ = 100;
	attack_ = 10;
}
 
int main()
{
	Status status;
	Status status2;

	const Status ructorStatus;
	const Status ructorStatus2;

	status.charstatusA("勇者", 150, 20);
	status.charstatusB();
}