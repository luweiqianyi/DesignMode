#pragma once
#include "AbstractSubject.h"
class ConcreteSubject1 :
	public AbstractSubject
{
	// 父类提供了默认的增加、删除观察者、以何种方式通知观察者的行为函数
	// 此处不对其进行重写，以使用父类的方式
};

