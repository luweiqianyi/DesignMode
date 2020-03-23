#include "AbstractBuilder.h"

AbstractBuilder::AbstractBuilder()
{
	m_product = nullptr;
}

AbstractBuilder::~AbstractBuilder()
{
}

void AbstractBuilder::buildPartA()
{
}

void AbstractBuilder::buildPartB()
{
}

void AbstractBuilder::buildPartC()
{
}

Product* AbstractBuilder::getProduct()
{
	return m_product;
}
