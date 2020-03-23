#pragma once
class ProductComponentA;
class ProductComponentB;
class ProductComponentC;

class Product
{
public:
	Product();
	virtual ~Product();

	// ʹ��virtual�Ա��ڶ�Product������չ
	virtual void setComponentA(ProductComponentA* componentA);
	virtual void setComponentB(ProductComponentB* componentB);
	virtual void setComponentC(ProductComponentC* componentC);

	void productInfo();
private:
	ProductComponentA* m_componentA;
	ProductComponentB* m_componentB;
	ProductComponentC* m_componentC;
};

