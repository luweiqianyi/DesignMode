#pragma once
#include"AbstractFactory.h"

class AbstractProductA;
class AbstractProductB;
/*
* ConcreteFactory1负责创建A类产品中的：ConcreteProductA1
* 负责创建B类产品中的: ConcreteProductB2
* 当然可以创建其他的具体工厂类来创建其他排列组合方式的产品对象
*/

// 以下代码存在内存泄漏： 在堆区创建对象的时候并没有将创建的对象进行释放
//class ConcreteFactory1 : public AbstractFactory
//{
//public:
//	/*virtual*/ AbstractProductA* createProductA();
//	/*virtual*/ AbstractProductB* createProductB();
//};
//AbstractProductA* ConcreteFactory1::createProductA()
//{
//	// return new ConcreteProductA1();存在内存泄漏问题
//}
//
//AbstractProductB* ConcreteFactory1::createProductB()
//{
//	// return new ConcreteProductB2();存在内存泄漏问题
//}

// 改进如下
// 1.使用指针变量指向在堆区创建的对象的地址
// 2.在ConcreteFactory1进行析构的时候 释放掉创建的对象的空间
class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	/*virtual*/ AbstractProductA* createProductA();
	/*virtual*/ AbstractProductB* createProductB();
private:
	AbstractProductA* m_productA;
	AbstractProductB* m_productB;
};
