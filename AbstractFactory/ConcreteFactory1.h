#pragma once
#include"AbstractFactory.h"

class AbstractProductA;
class AbstractProductB;
/*
* ConcreteFactory1���𴴽�A���Ʒ�еģ�ConcreteProductA1
* ���𴴽�B���Ʒ�е�: ConcreteProductB2
* ��Ȼ���Դ��������ľ��幤��������������������Ϸ�ʽ�Ĳ�Ʒ����
*/

// ���´�������ڴ�й©�� �ڶ������������ʱ��û�н������Ķ�������ͷ�
//class ConcreteFactory1 : public AbstractFactory
//{
//public:
//	/*virtual*/ AbstractProductA* createProductA();
//	/*virtual*/ AbstractProductB* createProductB();
//};
//AbstractProductA* ConcreteFactory1::createProductA()
//{
//	// return new ConcreteProductA1();�����ڴ�й©����
//}
//
//AbstractProductB* ConcreteFactory1::createProductB()
//{
//	// return new ConcreteProductB2();�����ڴ�й©����
//}

// �Ľ�����
// 1.ʹ��ָ�����ָ���ڶ��������Ķ���ĵ�ַ
// 2.��ConcreteFactory1����������ʱ�� �ͷŵ������Ķ���Ŀռ�
class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	/*virtual*/ AbstractProductA* createProductA();
	/*virtual*/ AbstractProductB* createProductB();
private:
	AbstractProductA* m_productA;
	AbstractProductB* m_productB;
};
