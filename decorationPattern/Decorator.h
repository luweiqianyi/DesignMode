#pragma once
#include "AbstractComponet.h"

/*
* 将需要进行装饰的行为方法A 抽取到一个抽象类中实现为纯虚函数
* 定义一个具体构建类和一个装饰者类，实现上述的抽象类
* 装饰者类内部提供一个注入方式(不管是构造注入还是 set注入)注入具体构建类的实例对象
* 同时提供一个接口方法(比如operation())来调用该注入的实例对象的行为函数A
* 继承装饰者类以实现不同方式的装饰行为，必须调用父类(Decorator)的operation来保证原有
* 行为的正确调用，后续再加上不同的装饰行为方法即可
*/
class Decorator :
	public AbstractComponent
{
public:
	Decorator();
	virtual ~Decorator();
	Decorator(AbstractComponent* abstractComponent);
	// 通过 AbstractComponent 继承
	virtual void operation() override;
	
protected:
	AbstractComponent* m_componnet;
};

