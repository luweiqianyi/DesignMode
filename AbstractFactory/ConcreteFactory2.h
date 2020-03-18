#pragma once
#include "AbstractFactory.h"

class AbstractProductA;
class AbstractProductB;

/*
* 具体的创建细节可以通过Lib的方式被封装：
* 只有提供Lib的人才知道其真正创建了什么类型
* 由于使用的是前置声明，产品类内部的细节也就看不见了
* ConcreteFactory1负责创建A类产品中的：ConcreteProductA2
* 负责创建B类产品中的: ConcreteProductB1
*/
class ConcreteFactory2 : public AbstractFactory
{
private:
	AbstractProductA* m_productA;
	AbstractProductB* m_productB;
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	AbstractProductA* createProductA();
	AbstractProductB* createProductB();
};

