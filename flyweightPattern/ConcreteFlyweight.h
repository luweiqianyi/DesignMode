#pragma once
#include "Flyweight.h"
class ConcreteFlyweight :
	public Flyweight
{
	// ͨ�� Flyweight �̳�
	virtual void operation(UnsharedConcreteFlyweight state) override;

	// ͨ�� Flyweight �̳�
	virtual void operation() override;
};

