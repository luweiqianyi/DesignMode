#pragma once
#include "Decorator.h"
class ConcreteDecorator2 :
	public Decorator
{
public:
	ConcreteDecorator2(AbstractComponent* component);
	virtual void operation();
	void addedFunction();
};

