#include "ConcreteFactory.h"
#include "ConcreteProduct1.h" 

AbstractProduct* ConcreteFactory::createProduct()
{
	// ������������ʱ����ȵ��ø���Ĺ��췽�����ٵ�������Ĺ��췽��
	AbstractProduct* ptr = new ConcreteProduct1(); 
	std::cout << __FUNCTION__ << " product: " << ptr << "\n";
	return ptr;
}
