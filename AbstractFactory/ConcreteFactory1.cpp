#include "ConcreteFactory1.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB2.h"
#include <iostream>

ConcreteFactory1::ConcreteFactory1()
{
	std::cout << __FUNCTION__ << "\n";
	m_productA = nullptr;
	m_productB = nullptr;
}

ConcreteFactory1::~ConcreteFactory1()
{
	std::cout << __FUNCTION__ << "\n";
	if (nullptr != m_productA) {
		delete m_productA;
		m_productA = nullptr;
	}
	if (nullptr != m_productB) {
		delete m_productB;
		m_productB = nullptr;
	}
}

AbstractProductA* ConcreteFactory1::createProductA()
{
	std::cout << __FUNCTION__ << "\n";
	// return new ConcreteProductA1();存在内存泄漏问题
	if (nullptr != m_productA) {
		delete m_productA;
	}	
	m_productA = new ConcreteProductA1();
	return m_productA;
}

AbstractProductB* ConcreteFactory1::createProductB()
{
	std::cout << __FUNCTION__ << "\n";
	// return new ConcreteProductB2();存在内存泄漏问题
	if (nullptr != m_productB) {
		delete m_productB;
	}	
	m_productB = new ConcreteProductB2();
	return m_productB;
}
