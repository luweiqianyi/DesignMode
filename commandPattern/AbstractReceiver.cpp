#include "AbstractReceiver.h"
#include<iostream>

AbstractReceiver::AbstractReceiver()
{
	std::cout << __FUNCTION__ << "\n";
}

AbstractReceiver::~AbstractReceiver()
{
	std::cout << __FUNCTION__ << "\n";
}

void AbstractReceiver::doAction()
{
	std::cout << __FUNCTION__ << "\n";
}
