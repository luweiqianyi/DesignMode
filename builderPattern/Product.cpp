#include "Product.h"
#include <iostream>
#include "ProductComponentA.h"
#include "ProductComponentB.h"
#include "ProductComponentC.h"

Product::Product()
{
	m_componentA = nullptr;
	m_componentB = nullptr;
	m_componentC = nullptr;
}

Product::~Product()
{
	std::cout << __FUNCTION__ << "\n";
	if (m_componentA) {
		delete m_componentA;
		m_componentA = nullptr;
	}
	if (m_componentB) {
		delete m_componentB;
		m_componentB = nullptr;
	}
	if (m_componentC) {
		delete m_componentC;
		m_componentC = nullptr;
	}
}

void Product::setComponentA(ProductComponentA* componentA)
{
	m_componentA = componentA;
}

void Product::setComponentB(ProductComponentB* componentB)
{
	m_componentB = componentB;
}

void Product::setComponentC(ProductComponentC* componentC)
{
	m_componentC = componentC;
}

void Product::productInfo()
{
	std::cout << "Product:\n";
	if (m_componentA) {
		std::cout << "	" << m_componentA->getComponentInfo() << "\n";
	}
	if (m_componentB) {
		std::cout << "	" << m_componentB->getComponentInfo() << "\n";
	}
	if (m_componentC) {
		std::cout << "	" << m_componentC->getComponentInfo() << "\n";
	}
}
