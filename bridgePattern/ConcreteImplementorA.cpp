#include "ConcreteImplementorA.h"
#include <iostream>

void ConcreteImplementorA::operationImpl()
{
	std::cout << __FUNCTION__ << "\n";
}
