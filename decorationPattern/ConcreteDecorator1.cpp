#include "ConcreteDecorator1.h"
#include <iostream>

ConcreteDecorator1::ConcreteDecorator1(AbstractComponent* component)
{
	m_componnet = component;
}

void ConcreteDecorator1::operation()
{
	// 对父类的行为进行装饰(或者说：将需要进行装饰的行为方法定义为父类中的方法，由具体的子类对该方法进行相应的装饰)
	Decorator::operation();
	addedFunction();
}
void ConcreteDecorator1::addedFunction()
{
	std::cout << "ConcreteDecorator1_" << this << "装饰行为1\n";
}
