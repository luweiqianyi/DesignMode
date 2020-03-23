#include "ConcreteComponent.h"
#include <iostream>

void ConcreteComponent::operation()
{
	std::cout << __FUNCTION__ << ": " << this << "\n";
}
