#pragma once
// #include"AbstractObserver.h"
#include<list>
class AbstractObserver; //不允许指向不完整的类型
class AbstractSubject
{
public:
	AbstractSubject();
	virtual ~AbstractSubject();
	virtual void addObserver(AbstractObserver* observer);
	virtual void removeObserver(AbstractObserver* observer);
	virtual void notifyObservers();
	virtual int size();
protected:
	bool contains(AbstractObserver* observer)const;
protected:
	std::list<AbstractObserver*> m_observers;
};

