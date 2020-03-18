#include "AbstractCommand.h"
#include<iostream>
AbstractCommand::AbstractCommand()
{
	std::cout << __FUNCTION__ << "\n";
}

AbstractCommand::~AbstractCommand()
{
	std::cout << __FUNCTION__ << "\n";
}

void AbstractCommand::executeCommand()
{
	std::cout << __FUNCTION__ << "\n";
}
