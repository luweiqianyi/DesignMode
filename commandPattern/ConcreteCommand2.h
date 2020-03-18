#pragma once
#include "AbstractCommand.h"
#include "ConcreteReceiverB.h"

class ConcreteCommand2 :
	public AbstractCommand
{
public:
	ConcreteCommand2();
	~ConcreteCommand2();
	void executeCommand();
private:
	ConcreteReceiverB* m_receiver;
};

