#pragma once
#include "GearState.h"
class ConcreteGearState2 :
	public GearState
{
public:
	ConcreteGearState2(Bike* bike);
	// ��ͬ�������ṩ��ͬ�ļ��� ���ٵ���Ϊ
	virtual void gearUp();
	virtual void gearDown();

	// Ĭ�ϼ̳��˸����е�Bike��Ա����
	void printCurrentState();
	virtual GearState* getCurrentState();
	
};

