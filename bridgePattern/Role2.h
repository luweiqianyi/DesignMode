#pragma once
#include "AbstractRole.h"
class Role2 :
	public AbstractRole
{
protected:
	Implementor* m_implementor; //�������ı����͸�����ǲ�һ����
public:
	Role2(Implementor* implementor);
	void operation();
};

