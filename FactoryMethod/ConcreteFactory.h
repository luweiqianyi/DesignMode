#pragma once
#include "AbstractFactory.h"
class AbstractProduct;
class ConcreteFactory :
	public AbstractFactory
{
	// ͨ�� AbstractFactory �̳�
	virtual AbstractProduct* createProduct() override;
};

