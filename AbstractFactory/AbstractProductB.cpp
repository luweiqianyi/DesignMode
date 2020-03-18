#include "AbstractProductB.h"
#include <iostream>

AbstractProductB::AbstractProductB()
{
	std::cout << __FUNCTION__ << " product:" << this << "\n";
}

AbstractProductB::~AbstractProductB()
{
}
