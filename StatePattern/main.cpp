#include<iostream>
#include"Bike.h"
#include"GearState.h"
#include"ConcreteGearState1.h"
using namespace std;


/*
* 状态模式: 对象 状态 行为 
* 一个对象有多种状态 一种状态可能对应一种或者多种行为
*/

int main() 
{
	// 创建时内部初始化了一个状态
	Bike* bike = new Bike(); 
	// 可以使用bike->setState(...)来指定一个新的状态
	bike->setState(new ConcreteGearState1(bike)); // 设置当前bike的当前状态为ConcreteGearState1

	// 执行以下函数，bike内部的状态会发生变化
	bike->gearUp();
	bike->gearUp();
	bike->gearUp();

	bike->gearDown();
	bike->gearDown();
	return 0;
}