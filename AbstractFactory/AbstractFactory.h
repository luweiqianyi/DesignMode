#pragma once
//#include "AbstractProductA.h"
//#include "AbstractProductB.h"

class AbstractProductA;
class AbstractProductB;

/*
* ���󹤳����𴴽������Ʒ��
* AbstractProductA��AbstractProductB��������ȫ��ͬ���͵Ĳ�Ʒ�����磺 �ֻ�������
* AbstractProductA�������и������ľ������ͣ����磺С���ֻ� ��Ϊ�ֻ� ...
* AbstractProductB�������и������ľ������ͣ����磺�������� �������� ...
* ���Ͼٵ����ӿ��ܲ�ǡ������Ϊ�ֻ���������ȫ��û�������ϵ�������ΪʲôҪ����ͬһ�����󹤳��д�����
* ��AbstractProductA��AbstractProductB����ȡ���־�����ϵ�������Ȼ�����Ǹ����в�ͬ�ľ�������
*
*
* ���󹤳���ȱ�㣺
* 1.ÿ����һ��������Ҫ��AbstractFactory�ж���ӿڽ��д���
* 2.AbstractFactory��������Ҫʵ�������ӵĴ�����Ʒ�Ľӿ�
*/
class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory(); // ʹ��virtual���θ�����������ʹ��deleteʱ�Ż��ҵ���ȷ�������������Լ�������������ڴ�����ͷ�
	virtual AbstractProductA* createProductA();
	virtual AbstractProductB* createProductB();
};

