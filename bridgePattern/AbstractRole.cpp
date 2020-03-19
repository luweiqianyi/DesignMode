#include "AbstractRole.h"
#include<iostream>

AbstractRole::AbstractRole()
{
	m_implementor = nullptr;
}

AbstractRole::AbstractRole(Implementor* implementor)
{
	if (nullptr != m_implementor) {
		delete m_implementor;
	}
	m_implementor = implementor;
}

AbstractRole::~AbstractRole()
{
	if (nullptr != m_implementor) {
		delete m_implementor;
		m_implementor = nullptr;
	}
}

void AbstractRole::operation()
{
	std::cout << __FUNCTION__ << "\n";
}
