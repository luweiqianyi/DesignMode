#pragma once
#include "AbstractBuilder.h"
class ConcreteBuilder2 :
	public AbstractBuilder
{
public:
	ConcreteBuilder2();
	~ConcreteBuilder2();

	virtual void buildPartA();
	virtual void buildPartB();
	virtual void buildPartC();

	virtual Product* getProduct();
};

