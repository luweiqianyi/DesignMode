#pragma once
#include "AbstractFactory.h"
class AbstractProduct;
class ConcreteFactory :
	public AbstractFactory
{
	// Í¨¹ý AbstractFactory ¼Ì³Ð
	virtual AbstractProduct* createProduct() override;
};

