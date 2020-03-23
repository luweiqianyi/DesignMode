#include"AbstractComponet.h"
#include"ConcreteComponent.h"
#include"Decorator.h"
#include"ConcreteDecorator1.h"
#include"ConcreteDecorator2.h"


int main()
{
	AbstractComponent* ab1 = new ConcreteComponent();

	// ʹ��װ����Ϊ1�Զ���ab1��ĳ��������Ϊ����װ��
	Decorator* decoratorBehavior1 = new ConcreteDecorator1(ab1);
	decoratorBehavior1->operation();

	// ʹ��װ����Ϊ2�Զ���ab1��ĳ��������Ϊ����װ��
	Decorator* decoratorBehavior2 = new ConcreteDecorator2(ab1);
	decoratorBehavior2->operation();
	return 0;
}