#include "AbstractObserver.h"
#include <iostream>
AbstractObserver::AbstractObserver()
{
}

AbstractObserver::~AbstractObserver()
{
}

void AbstractObserver::handle()
{
	std::cout << __FUNCTION__ << "\n";
}
