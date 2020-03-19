#include "Role2.h"
#include "Implementor.h"
#include <iostream>
Role2::Role2(Implementor* implementor)
{
	if (nullptr == m_implementor)
		delete m_implementor;
	m_implementor = implementor;
}

// 将两个部分进行桥接(由于传入的是Implementor基类指针)
// 所以模块之间的耦合度降低
// 由上层来控制到底传入什么具体类型的Implementor
void Role2::operation()
{
	std::cout << __FUNCTION__ << "\n";
	if (nullptr != m_implementor)
		m_implementor->operationImpl();
}
