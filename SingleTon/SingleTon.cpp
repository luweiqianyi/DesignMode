#include "SingleTon.h"
#include<iostream>

SingleTon* SingleTon::m_instance = NULL;

SingleTon::SingleTon()
{
	std::cout << __FUNCTION__ << "\n";
}

SingleTon::~SingleTon()
{
	std::cout << __FUNCTION__ << "\n";
}


SingleTon* SingleTon::getInstance()
{
	if (nullptr == m_instance) {
		m_instance = new SingleTon();
		std::cout << __FUNCTION__ << ": " << m_instance<<"\n";
	}
	return m_instance;
}
