#include "Role2.h"
#include "Implementor.h"
#include <iostream>
Role2::Role2(Implementor* implementor)
{
	if (nullptr == m_implementor)
		delete m_implementor;
	m_implementor = implementor;
}

// ���������ֽ����Ž�(���ڴ������Implementor����ָ��)
// ����ģ��֮�����϶Ƚ���
// ���ϲ������Ƶ��״���ʲô�������͵�Implementor
void Role2::operation()
{
	std::cout << __FUNCTION__ << "\n";
	if (nullptr != m_implementor)
		m_implementor->operationImpl();
}
