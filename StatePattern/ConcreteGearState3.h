#pragma once
#include"GearState.h"

class ConcreteGearState3 :
	public GearState
{
public:
	ConcreteGearState3(Bike* bike);

	// ��ͬ�������ṩ��ͬ�ļ��� ���ٵ���Ϊ
	virtual void gearUp();
	virtual void gearDown();

	// Ĭ�ϼ̳��˸����е�Bike��Ա����
	void printCurrentState();
	virtual GearState* getCurrentState();
};

