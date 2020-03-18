#pragma once
#include "strategy.h"
/**
* 最上层业务层
*/
class TopLogic
{
private:
	Strategy* m_strategy;
public:
	TopLogic();// 3
	TopLogic(Strategy* strategy); // 1
	~TopLogic();

	void concreteWork();// 2
	void concreteWork(Strategy* strategy); //4
};
// 方式一   1和2组合：创建上层逻辑对象时指定具体的策略
// 方式二   3和4组合：创建上层逻辑对象,在具体执行时才注入具体的策略对象进行调用

