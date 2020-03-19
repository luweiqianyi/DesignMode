#pragma once
#include "Flyweight.h"
class ConcreteFlyweight :
	public Flyweight
{
	// 通过 Flyweight 继承
	virtual void operation(UnsharedConcreteFlyweight state) override;

	// 通过 Flyweight 继承
	virtual void operation() override;
};

