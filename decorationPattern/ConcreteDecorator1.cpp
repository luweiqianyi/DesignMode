#include "ConcreteDecorator1.h"
#include <iostream>

ConcreteDecorator1::ConcreteDecorator1(AbstractComponent* component)
{
	m_componnet = component;
}

void ConcreteDecorator1::operation()
{
	// �Ը������Ϊ����װ��(����˵������Ҫ����װ�ε���Ϊ��������Ϊ�����еķ������ɾ��������Ը÷���������Ӧ��װ��)
	Decorator::operation();
	addedFunction();
}
void ConcreteDecorator1::addedFunction()
{
	std::cout << "ConcreteDecorator1_" << this << "װ����Ϊ1\n";
}
