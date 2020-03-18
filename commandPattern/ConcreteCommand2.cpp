#include "ConcreteCommand2.h"
#include <iostream>
ConcreteCommand2::ConcreteCommand2()
{
	std::cout << __FUNCTION__ << "\n";
	m_receiver = new ConcreteReceiverB();
}

ConcreteCommand2::~ConcreteCommand2()
{
	std::cout << __FUNCTION__ << "\n";
	if (nullptr != m_receiver) {
		delete m_receiver;
		m_receiver = nullptr;
	}
}

void ConcreteCommand2::executeCommand()
{
	std::cout << __FUNCTION__ << "\n";
	if (nullptr != m_receiver) {
		m_receiver->doAction();
	}
}
