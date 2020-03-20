#pragma once
class GearState; // 齿轮状态：加速和减速
class Bike
{
public:
	// 创建时只允许指定其中一个内部状态
	//Bike(GearState* state);
	Bike(); // 创建Bike时内部模式可以初始化一个默认状态，暂时不指定，通过setState来指定
	~Bike();

	//提供接口允许设置Bike的状态
	/*virtual*/  // void setState(GearState* state);
	// 更新当前bike对象的状态为state,返回当前bike对象更改对象之前的状态
	 GearState* setState(GearState* state);
	/*virtual*/ GearState* getState();

	/*virtual*/ void gearUp();// 加速，一定要有这个接口来通过m_gearState来控制状态的变化情况
	/*virtual*/ void gearDown();// 减速，一定要有这个接口来通过m_gearState来控制状态的变化情况
	
private:
	GearState* m_gearState;
};

