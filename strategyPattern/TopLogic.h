#pragma once
#include "strategy.h"
/**
* ���ϲ�ҵ���
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
// ��ʽһ   1��2��ϣ������ϲ��߼�����ʱָ������Ĳ���
// ��ʽ��   3��4��ϣ������ϲ��߼�����,�ھ���ִ��ʱ��ע�����Ĳ��Զ�����е���

