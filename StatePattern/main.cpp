#include<iostream>
#include"Bike.h"
#include"GearState.h"
#include"ConcreteGearState1.h"
using namespace std;


/*
* ״̬ģʽ: ���� ״̬ ��Ϊ 
* һ�������ж���״̬ һ��״̬���ܶ�Ӧһ�ֻ��߶�����Ϊ
*/

int main() 
{
	// ����ʱ�ڲ���ʼ����һ��״̬
	Bike* bike = new Bike(); 
	// ����ʹ��bike->setState(...)��ָ��һ���µ�״̬
	bike->setState(new ConcreteGearState1(bike)); // ���õ�ǰbike�ĵ�ǰ״̬ΪConcreteGearState1

	// ִ�����º�����bike�ڲ���״̬�ᷢ���仯
	bike->gearUp();
	bike->gearUp();
	bike->gearUp();

	bike->gearDown();
	bike->gearDown();
	return 0;
}