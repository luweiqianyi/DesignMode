#include "ConcreteFactory.h"
#include "ConcreteProduct1.h" 

AbstractProduct* ConcreteFactory::createProduct()
{
	// 创建子类对象的时候会先调用父类的构造方法，再调用子类的构造方法
	AbstractProduct* ptr = new ConcreteProduct1(); 
	std::cout << __FUNCTION__ << " product: " << ptr << "\n";
	return ptr;
}
