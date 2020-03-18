#include<iostream>
#include"TopLogic.h"
#include"ConcreteStrategy1.h"
#include"ConcreteStrategy2.h"
#include"Strategy.h"
using namespace std;


// 通过策略模式可以将去除程序中很多的if-else条件分支结构
int main() {
	Strategy* strategyInterface = new ConCreteStrategy1();
	// 根据不同的传入策略来执行对应的业务逻辑
	// 通过方式一执行策略1
	TopLogic* topLogic = new TopLogic(strategyInterface);
	topLogic->concreteWork();
	delete strategyInterface;

	// 通过方式一执行策略2
	strategyInterface = new ConcreteStrategy2();
	topLogic = new TopLogic(strategyInterface);
	topLogic->concreteWork();
	delete strategyInterface;

	strategyInterface = new ConcreteStrategy2();
	// 将不同的策略类进行注入，执行不同的策略，由上层来控制选择哪个策略(即选择传入的具体策略类是哪一个)
	// 通过方式二执行策略2，传入的策略对象是一个新的策略对象
	topLogic->concreteWork(strategyInterface);
	delete strategyInterface;
	strategyInterface = nullptr;
	// 以上代码将具体的策略注入到了上层的代码中(TopLogic),为上层的代码注入不同的策略对象以执行不同的策略

	return 0;
}