#include "ConcreteFactory2.h"
#include "ConcreteProduct2.h"

AbstractProduct* ConcreteFactory2::createProduct()
{
	AbstractProduct* ptr = new ConcreteProduct2();
	std::cout << __FUNCTION__ << " product: " << ptr << "\n";
	return ptr;
}
