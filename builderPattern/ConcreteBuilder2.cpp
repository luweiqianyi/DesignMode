#include "ConcreteBuilder2.h"
#include "Product.h"
#include "ProductComponentA.h"
#include "ProductComponentB.h"
#include "ProductComponentC.h"

ConcreteBuilder2::ConcreteBuilder2()
{
	m_product = new Product();
}

ConcreteBuilder2::~ConcreteBuilder2()
{
	if (m_product) {
		delete m_product;
		m_product = nullptr;
	}
}


// 说实话，用set的方式远没有add的方式更加合理，如果一个Product有许多component组成(而component的个数是不可知的情况下)
// 则需要在Product内部维护一个容器，比如:map list queue等
// 如果Product的Component的组成成分是确定的，比如就是三个，则可以用set的方式进行设定，同时指定三个成员变量分别代表三个
// 组成成分(component)
// 如果组成成分特别相似，则可以使其继承同一个类，使用多态来保证Product对象创建的灵活性
void ConcreteBuilder2::buildPartA()
{
	if (m_product) {
		m_product->setComponentA(new ProductComponentA());
	}	
}

void ConcreteBuilder2::buildPartB()
{
	if (m_product) {
		m_product->setComponentB(new ProductComponentB());
	}
}

void ConcreteBuilder2::buildPartC()
{
	if (m_product) {
		m_product->setComponentC(new ProductComponentC());
	}
}

Product* ConcreteBuilder2::getProduct()
{
	buildPartA();
	buildPartB();
	return m_product;
}
