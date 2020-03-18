#include "AbstractProductA.h"
#include <iostream>

AbstractProductA::AbstractProductA()
{
	std::cout << __FUNCTION__ << " product:" << this << "\n";
}

AbstractProductA::~AbstractProductA()
{
}

void AbstractProductA::showClassInfo()
{
	std::cout << "AbstractProductA: " << this<<"\n";
}
