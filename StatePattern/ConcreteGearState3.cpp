#include "ConcreteGearState3.h"
#include "ConcreteGearState2.h"
#include "ConcreteGearState1.h"
#include "Bike.h"
#include<iostream>

ConcreteGearState3::ConcreteGearState3(Bike* bike)
{
	m_bike = bike;
}

void ConcreteGearState3::gearUp()
{
	std::cout << __FUNCTION__ << ": ";
	m_bike->getState()->printCurrentState();
	std::cout << "gearUp 30!\n";
	m_bike->setState(new ConcreteGearState1(m_bike));
	m_bike->getState()->printCurrentState();
}

void ConcreteGearState3::gearDown()
{
	std::cout << __FUNCTION__ << ": ";
	//m_bike->getState()->printCurrentState();
	std::cout << "gearDown 30!\n";
	GearState* origin = m_bike->setState(new ConcreteGearState1(m_bike));
	m_bike->getState();
	//m_bike->getState()->printCurrentState();
	delete origin; 
}

void ConcreteGearState3::printCurrentState()
{
	std::cout << "current state: ConcreteGearState3_" << this << "\n";
}

GearState* ConcreteGearState3::getCurrentState()
{
	//std::cout << "currentState: ConcreteGearState1_" << this << "\n";
	printCurrentState();
	return this;
}
