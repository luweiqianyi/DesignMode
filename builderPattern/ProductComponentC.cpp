#include "ProductComponentC.h"
#include<typeinfo>
#include<iostream>


// Hash��ֻ��Ψһ��ʶ����࣬���ǲ���Ψһ��ʶͨ������ഴ���Ķ���
ProductComponentC::ProductComponentC()
{
	const std::type_info& t = typeid(*this);
	m_componentInfo = t.name() + std::string("_") + std::to_string(t.hash_code());
	std::cout << m_componentInfo << "_" << this << "\n";
}

ProductComponentC::~ProductComponentC()
{
	std::cout << __FUNCTION__ << "\n";
}

std::string ProductComponentC::getComponentInfo() const
{
	return m_componentInfo;
}
