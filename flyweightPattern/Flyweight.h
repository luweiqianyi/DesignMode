#pragma once

class UnsharedConcreteFlyweight;

class Flyweight
{
public:
	virtual void operation() = 0;
	virtual void operation(UnsharedConcreteFlyweight state)=0;
};

