#pragma once
#include "AbstractFactory.h"
class AbstractProduct;
class ConcreteFactory2 :
	public AbstractFactory
{
	// ͨ�� AbstractFactory �̳�
	virtual AbstractProduct* createProduct() override;
};

