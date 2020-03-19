#pragma once
#include "AbstractRole.h"
class Role2 :
	public AbstractRole
{
protected:
	Implementor* m_implementor; //自身创建的变量和父类的是不一样的
public:
	Role2(Implementor* implementor);
	void operation();
};

