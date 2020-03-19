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
	// ������A(��Role1)�Ͳ���B(����Implementor��������ʵ��)�������Ž�
	if (nullptr != m_implementor) {
		m_implementor->operationImpl();
	}
}
