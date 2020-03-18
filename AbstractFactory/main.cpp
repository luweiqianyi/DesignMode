#include"AbstractFactory.h"
#include"ConcreteFactory1.h"
#include"ConcreteFactory2.h"

#include"AbstractProductA.h"
#include"AbstractProductB.h"
#include<iostream>
using namespace std;

int main() {
	AbstractFactory* abstractFactory = new ConcreteFactory1();
	AbstractProductA* ptr=abstractFactory->createProductA(); //�����÷���ֵ�Դ����Ķ�����н���
	if (nullptr == ptr) { std::cout << "empty\n"; }
	abstractFactory->createProductB();

	// ���AbstractFactory����������û����virtual���Σ������ִ��ִֻ����AbstractFactory����������
	// ������ȥ�ҵ�ConcreteFactory1�������������е���
	// ǰ����Ҫ��ʾ��ConcreteFactory1����������������ܻ�����ڴ�й©(�ѿռ�)
	// ���߻���ȷ�ҵ�ConcreteFactory1������������ȷ���ͷ����ڲ�����ض��ڴ�ռ�
	delete abstractFactory;
	// AbstractFactory������������virtual��������abstractFactory�����Ķ���Ķ��ڴ�û���ͷŵ����������º���������ȷִ�С�
	// AbstractFactory����������virtual�����ڴ汻��ȷ�ͷ��ˣ����º����޷����ã�������쳣�˳���
	// ���ϲ������������������AbstractFactory���ڲ�����������ǰ�����ӻ���ȥ����virtual���ؼ��ֽ��в���
	ptr->showClassInfo(); 


	cout << "\n\n";
	abstractFactory = new ConcreteFactory2();
	abstractFactory->createProductA();
	abstractFactory->createProductB();

	//������ָ�������վ����ProductA����ProductB���ͣ�Ȼ��ʹ����Щ���������߼�������Ӧ��ʵ��
	return 0;
}