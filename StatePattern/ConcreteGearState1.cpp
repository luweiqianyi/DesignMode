#include "ConcreteGearState1.h"
#include "ConcreteGearState2.h"
#include"Bike.h"
#include<iostream>

ConcreteGearState1::ConcreteGearState1(Bike* bike)
{
	m_bike = bike;
}


// ��״̬�ĸ���Ϊ(gearUp)������ָ��m_bike����һ��״̬
void ConcreteGearState1::gearUp()
{
	std::cout << __FUNCTION__ << ": ";
	//m_bike->getState()->printCurrentState();
	std::cout << "gearUp 10!\n";
	// setState�ڲ��Ὣԭ�ڴ��ͷŵ� �����ڴ�й©
	GearState* origin=m_bike->setState(new ConcreteGearState2(m_bike));
	m_bike->getState();
	delete origin; // ���ͷŻ���ɶ��ڴ�й© ���originָ�Ŀ��ܾ����Լ�
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


