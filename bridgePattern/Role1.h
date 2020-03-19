#pragma once
#include "AbstractRole.h"

class Role1 :
	public AbstractRole
{
public:
	// C++中protected声明的函数是不能被外层进行访问的，
	// protected修饰的构造方法不能在外层创建对象
	// Java中protected声明的函数在同一个package下的其
	// 他类可以对其进行访问，同时同一个package下可以进
	// 行对象的创建
	Role1(Implementor* implementor);
public:
	void operation();

protected:
	Implementor* m_implementor; // 就近调用原则
};

