#include <iostream>

class Status
{
	private:
	std::string name_ = {};
	int hp_ = 0;
	int attack_ = 0;

public:
	void charstatusA();

	int charstatusB();
};

void Status::charstatusA() {
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = "動物";
	hp_ = 100;
	attack_ = 10;
}

int Status::charstatusB() {
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = "動物";
	hp_ = 100;
	attack_ = 10;
	return 0;
}
 
int main()
{
	Status status;
	status.charstatusA();
	status.charstatusB();
}