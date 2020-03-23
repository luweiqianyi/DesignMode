#pragma once
#include "Decorator.h"
class ConcreteDecorator1 :
	public Decorator
{
public:
	ConcreteDecorator1(AbstractComponent* component);
	virtual void operation();
	void addedFunction();
};

