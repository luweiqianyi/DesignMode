#include "Adaptee.h"
#include<iostream>

Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{
}

void Adaptee::functionToBeAdapted()
{
	std::cout << __FUNCTION__ << "\n";
}

