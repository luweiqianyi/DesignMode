#pragma once
class Bike;

// GearState״̬��Bike��״̬,��Ҫ��GearState�ڲ���һ��
// Bike�����Ա�ʹ�����Bike��������ڲ�״̬�߼��ĸı�
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

