#pragma once

#include<string>

/*
* Ŀǰ��֪���������������ʲô��
*/
class UnsharedConcreteFlyweight
{
private:
	std::string m_info;
public:
	void setInfo(const std::string& info);
	std::string getInfo()const;
};

