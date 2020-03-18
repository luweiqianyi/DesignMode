#include "ConcreteReceiverB.h"
#include<iostream>

ConcreteReceiverB::ConcreteReceiverB()
{
	std::cout << __FUNCTION__ << "\n";
}

ConcreteReceiverB::~ConcreteReceiverB()
{
	std::cout << __FUNCTION__ << "\n";
}

void ConcreteReceiverB::doAction()
{
	std::cout << __FUNCTION__ << "\n";
}
