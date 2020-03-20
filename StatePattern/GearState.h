#pragma once
class Bike;

// GearState状态是Bike的状态,需要在GearState内部绑定一个
// Bike对象，以便使用这个Bike对象进行内部状态逻辑的改变
class GearState
{
public:
	GearState();
	GearState(Bike* bike);
	virtual void gearUp();
	virtual void gearDown();

	//virtual void setCurrentState();
	virtual void printCurrentState();
	virtual GearState* getCurrentState();

protected:
	Bike* m_bike; // 
};

