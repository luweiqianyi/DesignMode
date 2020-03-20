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


// ͨ��ע���GearState����������Bike�ľ���gearUp��gearDown��Ϊ
// �̳�GearState,��ʵ��������
// ��ע�뵽Bike��ʱ��ѡ��GearState�Ĳ�ͬʵ�ֵ�����ʵ���������ʹ��
// gearUp��gearDown���ֳ���̬��
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
	// �˴���Ӧ���ͷŵ�ԭ����״̬���ڴ棬����������״̬���󣬿��Խ�ԭ����״̬���з��أ����ⲿ�����ͷ�
	/*if (nullptr != m_gearState) {
		delete m_gearState;
	}*/
	GearState* originState = m_gearState;
	std::cout << "\nBike setState: " << state<<"\n";
	m_gearState = state;
	return originState;
}


// ������룺�ڲ���Ӧ���ͷ�
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

