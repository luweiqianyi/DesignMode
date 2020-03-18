#include"ConcreteCommand1.h"
#include"ConcreteCommand2.h"
#include<iostream>
using namespace std;

/*
* 命令模式和策略模式有点相像啊，只不过命令模式的绑定关系较为死板
* 策略模式的绑定关系较为灵活
*/

// 命令模式的多态性由命令的接收来负责实现具体的命令行为，即在doAction()函数内部进行实现
int main() {
	// 执行Command,观察函数行为
	// 具体的Command对象内部封装了具体的执行者，使得某个具体命令只能
	// 被某个执行者执行
	// 如果需要使得某类执行者执行，需要向外提供一个接口，接收同类的不同执行者对象
	ConcreteCommand1* command1 = new ConcreteCommand1();
	command1->executeCommand();

	cout << "\n\n";

	ConcreteCommand2* command2 = new ConcreteCommand2();
	command2->executeCommand();
	return 0;
}