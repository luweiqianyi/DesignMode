#pragma once
#include "AbstractBuilder.h"
class ConcreteBuilder1 :
	public AbstractBuilder
{
public:
	ConcreteBuilder1();
	virtual ~ConcreteBuilder1();
	virtual void buildPartA();
	virtual void buildPartB();
	virtual void buildPartC();

	virtual Product* getProduct();
	// 使用父类的保护成员变量m_product
};

