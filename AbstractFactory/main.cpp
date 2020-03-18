#include"AbstractFactory.h"
#include"ConcreteFactory1.h"
#include"ConcreteFactory2.h"

#include"AbstractProductA.h"
#include"AbstractProductB.h"
#include<iostream>
using namespace std;

int main() {
	AbstractFactory* abstractFactory = new ConcreteFactory1();
	AbstractProductA* ptr=abstractFactory->createProductA(); //可以用返回值对创建的对象进行接收
	if (nullptr == ptr) { std::cout << "empty\n"; }
	abstractFactory->createProductB();

	// 如果AbstractFactory的析构函数没有用virtual修饰，该语句执行只执行了AbstractFactory的析构函数
	// 而不会去找到ConcreteFactory1的析构函数进行调用
	// 前者需要显示对ConcreteFactory1进行析构，否则可能会造成内存泄漏(堆空间)
	// 后者会正确找到ConcreteFactory1进行析构，正确地释放其内部申请地堆内存空间
	delete abstractFactory;
	// AbstractFactory析构函数不加virtual，由于由abstractFactory创建的对象的堆内存没有释放掉，所以以下函数可以正确执行。
	// AbstractFactory析构函数加virtual，堆内存被正确释放了，以下函数无法调用，程序会异常退出。
	// 以上阐述的两种现象可以在AbstractFactory类内部的析构函数前后增加或者去掉“virtual”关键字进行测试
	ptr->showClassInfo(); 


	cout << "\n\n";
	abstractFactory = new ConcreteFactory2();
	abstractFactory->createProductA();
	abstractFactory->createProductB();

	//可以用指针来接收具体的ProductA或者ProductB类型，然后使用这些对象对相关逻辑进行相应的实现
	return 0;
}