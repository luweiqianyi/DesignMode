#include "ConcreteGearState1.h"
#include "ConcreteGearState2.h"
#include "ConcreteGearState3.h"
#include<iostream>
#include "Bike.h"

ConcreteGearState2::ConcreteGearState2(Bike* bike)
{
	m_bike = bike;
}

void ConcreteGearState2::gearUp()
{
	std::cout << __FUNCTION__ << ": ";
	m_bike->getState()->printCurrentState();
	std::cout << "gearUp 20!\n";
	m_bike->setState(new ConcreteGearState3(m_bike));
	m_bike->getState()->printCurrentState();
}

void ConcreteGearState2::gearDown()
{
	std::cout << __FUNCTION__ << ": ";
	//m_bike->getState()->printCurrentState();
	std::cout << "gearDown 20!\n";
	GearState* origin = m_bike->setState(new ConcreteGearState1(m_bike));
	m_bike->getState();//->printCurrentState();
	delete origin;
}

void ConcreteGearState2::printCurrentState()
{
	//std::cout << "current state: ConcreteGearState2_"<<this<<"\n";
	std::cout << "current state: ConcreteGearState2_" << this << "\n";
}

GearState* ConcreteGearState2::getCurrentState()
{
	//std::cout << "currentState: ConcreteGearState1_" << this << "\n";
	printCurrentState();
	return this;
}
