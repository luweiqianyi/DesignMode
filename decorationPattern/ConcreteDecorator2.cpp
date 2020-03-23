#include "ConcreteDecorator2.h"
#include <iostream>
ConcreteDecorator2::ConcreteDecorator2(AbstractComponent* component)
{
	m_componnet = component;
}
void ConcreteDecorator2::operation()
{
	// 对父类的行为进行装饰(或者说：将需要进行装饰的行为方法定义为父类中的方法，由具体的子类对该方法进行相应的装饰)
	Decorator::operation();
	addedFunction();
}

void ConcreteDecorator2::addedFunction()
{
	std::cout << "ConcreteDecorator2_" << this << "装饰行为2\n";
}
