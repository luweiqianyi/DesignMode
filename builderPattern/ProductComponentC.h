#pragma once
#include<string>

class ProductComponentC
{
public:
	ProductComponentC();
	~ProductComponentC();

	std::string getComponentInfo()const;
private:
	std::string m_componentInfo;
};

