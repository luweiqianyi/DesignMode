#include "ConcreteCommand1.h"
#include<iostream>

ConcreteCommand1::ConcreteCommand1()
{
	std::cout << __FUNCTION__ << "\n";
	m_receiver = new ConcreteReceiverA();
}

ConcreteCommand1::~ConcreteCommand1()
{
	std::cout << __FUNCTION__ << "\n";
	if (nullptr != m_receiver)
	{
		delete m_receiver;
		m_receiver = nullptr;
	}
}

void ConcreteCommand1::executeCommand()
{
	std::cout << __FUNCTION__ << "\n";
	if (nullptr != m_receiver) {
		m_receiver->doAction();
	}
}
