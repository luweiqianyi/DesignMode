#include "TopLogic.h"
#include<iostream>

TopLogic::TopLogic()
{
	std::cout << __FUNCTION__ << "\n";
}

TopLogic::TopLogic(Strategy* strategy)
{
	std::cout << __FUNCTION__ << "\n";
	m_strategy = strategy;
}

TopLogic::~TopLogic()
{
	std::cout << __FUNCTION__ << "\n";
}

void TopLogic::concreteWork()
{
	std::cout << __FUNCTION__ << "\n";
	if (m_strategy) {
		m_strategy->strategy();
	}
}

void TopLogic::concreteWork(Strategy* strategy)
{
	if (strategy) {
		m_strategy = strategy;
		m_strategy->strategy();
	}
}
