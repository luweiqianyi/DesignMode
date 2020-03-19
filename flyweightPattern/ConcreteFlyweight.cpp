#include "ConcreteFlyweight.h"
#include "UnsharedConcreteFlyweight.h"
#include <iostream>

void ConcreteFlyweight::operation(UnsharedConcreteFlyweight state)
{
	std::cout << "ConcreteFlyweight: " << this << " do operation!\n";
}

void ConcreteFlyweight::operation()
{
	std::cout << "ConcreteFlyweight: " << this << " do operation!\n";
}
