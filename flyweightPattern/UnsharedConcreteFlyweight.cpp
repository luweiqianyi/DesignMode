#include "UnsharedConcreteFlyweight.h"

void UnsharedConcreteFlyweight::setInfo(const std::string& info)
{
	m_info = info;
}

std::string UnsharedConcreteFlyweight::getInfo() const
{
	return m_info;
}
