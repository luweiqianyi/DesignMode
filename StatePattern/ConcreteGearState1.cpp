#include "ConcreteGearState1.h"
#include "ConcreteGearState2.h"
#include"Bike.h"
#include<iostream>

ConcreteGearState1::ConcreteGearState1(Bike* bike)
{
	m_bike = bike;
}


// 该状态的该行为(gearUp)结束后指定m_bike的下一个状态
void ConcreteGearState1::gearUp()
{
	std::cout << __FUNCTION__ << ": ";
	//m_bike->getState()->printCurrentState();
	std::cout << "gearUp 10!\n";
	// setState内部会将原内存释放掉 避免内存泄漏
	GearState* origin=m_bike->setState(new ConcreteGearState2(m_bike));
	m_bike->getState();
	delete origin; // 不释放会造成堆内存泄漏 这个origin指的可能就是自己
}

void ConcreteGearState1::gearDown()
{
	std::cout << __FUNCTION__ << ": ";
	m_bike->getState()->printCurrentState();
	std::cout << "gearDown 10!\n";
	m_bike->setState(new ConcreteGearState2(m_bike));
	m_bike->getState()->printCurrentState();
}

void ConcreteGearState1::printCurrentState()
{
	std::cout << "current state: ConcreteGearState1_" << this << "\n";
}

GearState* ConcreteGearState1::getCurrentState()
{
	printCurrentState();
	return this;
}


