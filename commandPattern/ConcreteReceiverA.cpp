#include "ConcreteReceiverA.h"
#include <iostream>

ConcreteReceiverA::ConcreteReceiverA()
{
	std::cout << __FUNCTION__ << "\n";
}

ConcreteReceiverA::~ConcreteReceiverA()
{
	std::cout << __FUNCTION__ << "\n";
}

void ConcreteReceiverA::doAction()
{
	std::cout << __FUNCTION__ << "\n";
}
