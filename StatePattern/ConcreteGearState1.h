#pragma once
#include "GearState.h"
class Bike;
class ConcreteGearState1 :
	public GearState
{
public:

	ConcreteGearState1(Bike* bike);

	// ��ͬ�������ṩ��ͬ�ļ��� ���ٵ���Ϊ
	/*virtual*/ void gearUp();
	/*virtual*/ void gearDown();

	// Ĭ�ϼ̳��˸����е�Bike��Ա����
	void printCurrentState();
	virtual GearState* getCurrentState();
};

