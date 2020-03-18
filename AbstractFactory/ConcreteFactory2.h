#pragma once
#include "AbstractFactory.h"

class AbstractProductA;
class AbstractProductB;

/*
* ����Ĵ���ϸ�ڿ���ͨ��Lib�ķ�ʽ����װ��
* ֻ���ṩLib���˲�֪��������������ʲô����
* ����ʹ�õ���ǰ����������Ʒ���ڲ���ϸ��Ҳ�Ϳ�������
* ConcreteFactory1���𴴽�A���Ʒ�еģ�ConcreteProductA2
* ���𴴽�B���Ʒ�е�: ConcreteProductB1
*/
class ConcreteFactory2 : public AbstractFactory
{
private:
	AbstractProductA* m_productA;
	AbstractProductB* m_productB;
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	AbstractProductA* createProductA();
	AbstractProductB* createProductB();
};

