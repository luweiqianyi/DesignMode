#include "Role1.h"
#include<iostream>
#include"Implementor.h"

Role1::Role1(Implementor* implementor)
{
	m_implementor = implementor;
}

void Role1::operation()
{
	std::cout << __FUNCTION__ << "\n";
	// 将部分A(即Role1)和部分B(外界的Implementor或其子类实例)进行了桥接
	if (nullptr != m_implementor) {
		m_implementor->operationImpl();
	}
}
