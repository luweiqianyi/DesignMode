#include "ProductComponentA.h"
#include<typeinfo>
#include<iostream>


// Hash��ֻ��Ψһ��ʶ����࣬���ǲ���Ψһ��ʶͨ������ഴ���Ķ���
ProductComponentA::ProductComponentA()
{
	const std::type_info& t =typeid(*this);
	m_componentInfo = t.name() + std::string("_") + std::to_string(t.hash_code());
	std::cout << m_componentInfo << "_" << this << "\n";
	//m_componentInfo = "ProductComponentA_" + ti1.hash_code();
}

ProductComponentA::~ProductComponentA()
{
	std::cout << __FUNCTION__ << "\n";
}

std::string ProductComponentA::getComponentInfo() const
{
	return m_componentInfo;
}
