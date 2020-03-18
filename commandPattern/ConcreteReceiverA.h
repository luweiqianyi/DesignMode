#pragma once
#include "AbstractReceiver.h"
class ConcreteReceiverA :
	public AbstractReceiver
{
public:
	ConcreteReceiverA();
	~ConcreteReceiverA();
public:
	virtual void doAction();
};

