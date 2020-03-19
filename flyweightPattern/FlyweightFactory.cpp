#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"
#include <iostream>

FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
}

// ��Ԫ������ĳһ�������Ԫ������а�
// ��û��ʲô�취ʵ�ֶ�̬?
Flyweight* FlyweightFactory::getFlyweight(std::string key)
{
	auto iter = m_flyweights.find(key);
	if (iter != m_flyweights.end()) {
		return iter->second;
	}	
	else {
		m_flyweights[key] = new ConcreteFlyweight();
		std::cout << "new ConcreteFlyweight: " << m_flyweights[key]<<"\n";
		return m_flyweights[key];
	}
}
