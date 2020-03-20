#pragma once
#include "GearState.h"
class Bike;
class ConcreteGearState1 :
	public GearState
{
public:

	ConcreteGearState1(Bike* bike);

	// 不同的子类提供不同的加速 减速的行为
	/*virtual*/ void gearUp();
	/*virtual*/ void gearDown();

	// 默认继承了父类中的Bike成员变量
	void printCurrentState();
	virtual GearState* getCurrentState();
};

