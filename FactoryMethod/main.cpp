#include<iostream>
#include"AbstractFactory.h"
#include"ConcreteFactory.h"
#include"ConcreteFactory2.h"
#include"AbstractProduct.h"
#include"ConcreteProduct1.h"
#include"ConcreteProduct2.h"
using namespace std;

int main()
{
	// 低耦合
	// 1.创建不同的工厂对象来创建其所管理的产品对象
	// 2.具体的工厂和具体的产品一一绑定
	AbstractFactory* abstractFactory = new ConcreteFactory();
	abstractFactory->createProduct(); // 可以使用返回值来接收特定的产品对象
	abstractFactory = new ConcreteFactory2();
	abstractFactory->createProduct();
	return 0;
}