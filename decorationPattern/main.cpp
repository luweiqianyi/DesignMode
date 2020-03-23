#include"AbstractComponet.h"
#include"ConcreteComponent.h"
#include"Decorator.h"
#include"ConcreteDecorator1.h"
#include"ConcreteDecorator2.h"


int main()
{
	AbstractComponent* ab1 = new ConcreteComponent();

	// 使用装饰行为1对对象ab1的某个具体行为进行装饰
	Decorator* decoratorBehavior1 = new ConcreteDecorator1(ab1);
	decoratorBehavior1->operation();

	// 使用装饰行为2对对象ab1的某个具体行为进行装饰
	Decorator* decoratorBehavior2 = new ConcreteDecorator2(ab1);
	decoratorBehavior2->operation();
	return 0;
}