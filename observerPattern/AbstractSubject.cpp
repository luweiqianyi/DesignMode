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

// ��Ҫ���еĹ۲��߶Ը�������д���
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
	// ���Բ��Ҳ��ԣ�ʱ�临�Ӷ�O(n)
	for (auto it = m_observers.begin(); it != m_observers.end(); it++)
	{
		if (observer == *it)
			return true;
	}
	return false;
}
