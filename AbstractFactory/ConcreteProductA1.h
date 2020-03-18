#pragma once
#include "AbstractProductA.h"
class ConcreteProductA1 :
	public AbstractProductA
{
public:
	ConcreteProductA1();
	~ConcreteProductA1();
	/*virtual*/ void showClassInfo();
};

