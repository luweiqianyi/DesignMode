#include "FlyweightFactory.h"
#include "Flyweight.h"

#include<iostream>


// ��Ԫģʽ
// �ù�����ά��һ����Ԫ�����(��������map����Ŵ�������Ԫ����)
// ���ݼ�����ѯĳ��Ԫ�����Ƿ���ڣ�����������򴴽�
// ����һ�����⣺�������޴����Ԫ����ص����һ�������
int main()
{
	FlyweightFactory* factory = new FlyweightFactory();
	Flyweight* flyweight = factory->getFlyweight("1");
	flyweight->operation();

	flyweight = factory->getFlyweight("2");
	flyweight->operation();

	flyweight = factory->getFlyweight("1");
	flyweight->operation();
	return 0;
}