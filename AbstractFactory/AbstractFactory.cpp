#include "AbstractFactory.h"
#include <iostream>
AbstractFactory::AbstractFactory()
{
	std::cout << __FUNCTION__ << "\n";
}
AbstractFactory::~AbstractFactory()
{
	std::cout << __FUNCTION__ << "\n";
}
AbstractProductA* AbstractFactory::createProductA()
{
	std::cout << __FUNCTION__ << "\n";
	return nullptr;
}

AbstractProductB* AbstractFactory::createProductB()
{
	std::cout << __FUNCTION__ << "\n";
	return nullptr;
}
