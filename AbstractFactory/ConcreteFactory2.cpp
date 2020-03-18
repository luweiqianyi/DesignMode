#include "ConcreteFactory2.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB1.h"
ConcreteFactory2::ConcreteFactory2()
{
	m_productA = nullptr;
	m_productB = nullptr;
}
ConcreteFactory2::~ConcreteFactory2()
{
	if (nullptr == m_productA) {
		delete m_productA;
		m_productA = nullptr;
	}
	if (nullptr == m_productB) {
		delete m_productB;
		m_productB = nullptr;
	}
}
AbstractProductA* ConcreteFactory2::createProductA()
{
	if (nullptr != m_productA) {
		delete m_productA;
	}
	m_productA = new ConcreteProductA2();
	return m_productA;
}

AbstractProductB* ConcreteFactory2::createProductB()
{
	if (nullptr != m_productB) {
		delete m_productB;
	}
	m_productB = new ConcreteProductB1();
	return m_productB;
}
