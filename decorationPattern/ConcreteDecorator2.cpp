#include "ConcreteDecorator2.h"
#include <iostream>
ConcreteDecorator2::ConcreteDecorator2(AbstractComponent* component)
{
	m_componnet = component;
}
void ConcreteDecorator2::operation()
{
	// �Ը������Ϊ����װ��(����˵������Ҫ����װ�ε���Ϊ��������Ϊ�����еķ������ɾ��������Ը÷���������Ӧ��װ��)
	Decorator::operation();
	addedFunction();
}

void ConcreteDecorator2::addedFunction()
{
	std::cout << "ConcreteDecorator2_" << this << "װ����Ϊ2\n";
}
