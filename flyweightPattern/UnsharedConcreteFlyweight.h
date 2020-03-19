#pragma once

#include<string>

/*
* 目前不知道这个类是用来做什么的
*/
class UnsharedConcreteFlyweight
{
private:
	std::string m_info;
public:
	void setInfo(const std::string& info);
	std::string getInfo()const;
};

