#include<iostream>
#include"AbstractFactory.h"
#include"ConcreteFactory.h"
#include"ConcreteFactory2.h"
#include"AbstractProduct.h"
#include"ConcreteProduct1.h"
#include"ConcreteProduct2.h"
using namespace std;

int main()
{
	// �����
	// 1.������ͬ�Ĺ���������������������Ĳ�Ʒ����
	// 2.����Ĺ����;���Ĳ�Ʒһһ��
	AbstractFactory* abstractFactory = new ConcreteFactory();
	abstractFactory->createProduct(); // ����ʹ�÷���ֵ�������ض��Ĳ�Ʒ����
	abstractFactory = new ConcreteFactory2();
	abstractFactory->createProduct();
	return 0;
}