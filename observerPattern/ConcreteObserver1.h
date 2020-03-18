#pragma once
#include "AbstractObserver.h"
class ConcreteObserver1 :
	public AbstractObserver
{
protected:
	void handle();
};

