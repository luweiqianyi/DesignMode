#pragma once
#include<string>
#include<map>
class Flyweight;

class FlyweightFactory
{
public:
	FlyweightFactory();
	~FlyweightFactory();

	Flyweight* getFlyweight(std::string key);

private:
	std::map<std::string, Flyweight*> m_flyweights;
};

