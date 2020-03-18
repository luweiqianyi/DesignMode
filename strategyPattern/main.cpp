#include<iostream>
#include"TopLogic.h"
#include"ConcreteStrategy1.h"
#include"ConcreteStrategy2.h"
#include"Strategy.h"
using namespace std;


// ͨ������ģʽ���Խ�ȥ�������кܶ��if-else������֧�ṹ
int main() {
	Strategy* strategyInterface = new ConCreteStrategy1();
	// ���ݲ�ͬ�Ĵ��������ִ�ж�Ӧ��ҵ���߼�
	// ͨ����ʽһִ�в���1
	TopLogic* topLogic = new TopLogic(strategyInterface);
	topLogic->concreteWork();
	delete strategyInterface;

	// ͨ����ʽһִ�в���2
	strategyInterface = new ConcreteStrategy2();
	topLogic = new TopLogic(strategyInterface);
	topLogic->concreteWork();
	delete strategyInterface;

	strategyInterface = new ConcreteStrategy2();
	// ����ͬ�Ĳ��������ע�룬ִ�в�ͬ�Ĳ��ԣ����ϲ�������ѡ���ĸ�����(��ѡ����ľ������������һ��)
	// ͨ����ʽ��ִ�в���2������Ĳ��Զ�����һ���µĲ��Զ���
	topLogic->concreteWork(strategyInterface);
	delete strategyInterface;
	strategyInterface = nullptr;
	// ���ϴ��뽫����Ĳ���ע�뵽���ϲ�Ĵ�����(TopLogic),Ϊ�ϲ�Ĵ���ע�벻ͬ�Ĳ��Զ�����ִ�в�ͬ�Ĳ���

	return 0;
}