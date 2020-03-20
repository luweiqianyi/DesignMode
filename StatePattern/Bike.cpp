#include "Bike.h"
#include "GearState.h"
#include <iostream>
//Bike::Bike(GearState* state)
//{
//	m_gearState = state;
//}

Bike::Bike()
{
	m_gearState = nullptr;
}

Bike::~Bike()
{
	if (nullptr != m_gearState) {
		delete m_gearState;
		m_gearState = nullptr;
	}
}


// 通过注入的GearState对象来控制Bike的具体gearUp和gearDown行为
// 继承GearState,并实现其子类
// 在注入到Bike的时候选择GearState的不同实现的子类实例对象可以使得
// gearUp和gearDown呈现出多态性
void Bike::gearUp()
{
	if (nullptr != m_gearState) {
		/*std::cout << __FUNCTION__ << ":  ";
		m_gearState->printCurrentState();*/
		m_gearState->gearUp();
	}
}

void Bike::gearDown()
{
	if (nullptr != m_gearState){
		/*std::cout << __FUNCTION__ << ":  ";
		m_gearState->printCurrentState();*/
		m_gearState->gearDown();
	}
}

GearState* Bike::setState(GearState* state)
{
	// 此处不应该释放掉原来的状态的内存，会引发程序状态错误，可以将原来的状态进行返回，由外部进行释放
	/*if (nullptr != m_gearState) {
		delete m_gearState;
	}*/
	GearState* originState = m_gearState;
	std::cout << "\nBike setState: " << state<<"\n";
	m_gearState = state;
	return originState;
}


// 错误代码：内部不应该释放
//void Bike::setState(GearState* state)
//{
//	
//	if (nullptr != m_gearState) {
//		delete m_gearState;
//	}
//	std::cout << "\nBike setState: " << state << "\n";
//	m_gearState = state;
//}

GearState* Bike::getState()
{
	std::cout << "Bike::getState: " << m_gearState << "\n";
	// return m_gearState;
	//return m_gearState->getCurrentState();
	return m_gearState;
}

