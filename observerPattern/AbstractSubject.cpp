#include "AbstractSubject.h"
#include"AbstractObserver.h"
AbstractSubject::AbstractSubject()
{
}

AbstractSubject::~AbstractSubject()
{
}

void AbstractSubject::addObserver(AbstractObserver* observer)
{
	if (nullptr != observer) {
		m_observers.push_back(observer);
	}
}

void AbstractSubject::removeObserver(AbstractObserver* observer)
{
	if (contains(observer)) {
		m_observers.remove(observer);
	}
}

// 需要所有的观察者对该主题进行处理
void AbstractSubject::notifyObservers()
{
	for (auto obj : m_observers)
	{
		obj->handle();
	}
}

int AbstractSubject::size()
{
	return m_observers.size();
}

bool AbstractSubject::contains(AbstractObserver* observer) const
{
	if (m_observers.size() == 0)
		return false;
	// 线性查找策略：时间复杂度O(n)
	for (auto it = m_observers.begin(); it != m_observers.end(); it++)
	{
		if (observer == *it)
			return true;
	}
	return false;
}
