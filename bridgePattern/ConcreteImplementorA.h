#pragma once
#include "Implementor.h"
class ConcreteImplementorA :
	public Implementor
{
public:
	// ͨ�� Implementor �̳�
	virtual void operationImpl() override;
};

