#include "ProductComponentC.h"
#include<typeinfo>
#include<iostream>


// Hash码只能唯一标识这个类，但是不能唯一标识通过这个类创建的对象
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
