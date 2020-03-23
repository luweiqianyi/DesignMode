#include "ProductComponentB.h"
#include<typeinfo>
#include<iostream>

// Hash��ֻ��Ψһ��ʶ����࣬���ǲ���Ψһ��ʶͨ������ഴ���Ķ���
ProductComponentB::ProductComponentB()
{
	const std::type_info& t = typeid(*this);
	m_componentInfo = t.name() + std::string("_") + std::to_string(t.hash_code());
	std::cout << m_componentInfo << "_" << this<<"\n";
}

ProductComponentB::~ProductComponentB()
{
	std::cout << __FUNCTION__ << "\n";
}

std::string ProductComponentB::getComponentInfo() const
{
	return m_componentInfo;
}
