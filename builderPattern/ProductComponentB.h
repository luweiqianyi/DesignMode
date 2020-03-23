#pragma once
#include<string>
class ProductComponentB
{
public:
	ProductComponentB();
	~ProductComponentB();

	std::string getComponentInfo()const;
private:
	std::string m_componentInfo;
};

