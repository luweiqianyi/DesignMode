#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"
#include <iostream>

FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
}

// 享元工厂和某一具体的享元对象进行绑定
// 有没有什么办法实现多态?
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
