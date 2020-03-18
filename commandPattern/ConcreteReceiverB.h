#pragma once
#include "AbstractReceiver.h"
class ConcreteReceiverB :
	public AbstractReceiver
{
public:
	ConcreteReceiverB();
	~ConcreteReceiverB();
	void doAction();
};

