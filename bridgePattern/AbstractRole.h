#pragma once
class Implementor;

class AbstractRole
{
protected:
	Implementor* m_implementor;
public:
	AbstractRole();
	AbstractRole(Implementor* implementor);
	virtual ~AbstractRole();
	virtual void operation();
};

