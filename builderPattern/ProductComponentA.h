#pragma once
#include<string>
class ProductComponentA
{
public:
	ProductComponentA();
	~ProductComponentA();

	std::string getComponentInfo()const;
private:
	std::string m_componentInfo;
};

