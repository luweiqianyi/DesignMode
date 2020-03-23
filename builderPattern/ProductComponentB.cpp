#include "ProductComponentB.h"
#include<typeinfo>
#include<iostream>

// Hash码只能唯一标识这个类，但是不能唯一标识通过这个类创建的对象
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
