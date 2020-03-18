#include "ConcreteProductA1.h"
#include <iostream>

ConcreteProductA1::ConcreteProductA1()
{
	std::cout << __FUNCTION__ << " product:" << this << "\n";
}

ConcreteProductA1::~ConcreteProductA1()
{
	std::cout << __FUNCTION__ << "\n";
}

void ConcreteProductA1::showClassInfo()
{
	std::cout << __FUNCTION__ << ": " << this << "\n";
}
