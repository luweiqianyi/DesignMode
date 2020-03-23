#pragma once
class Product;

class AbstractBuilder
{
public:
	AbstractBuilder();
	virtual ~AbstractBuilder();
	virtual void buildPartA();
	virtual void buildPartB();
	virtual void buildPartC();

	virtual Product* getProduct();
protected:
	Product* m_product;
};

