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


// ˵ʵ������set�ķ�ʽԶû��add�ķ�ʽ���Ӻ������һ��Product�����component���(��component�ĸ����ǲ���֪�������)
// ����Ҫ��Product�ڲ�ά��һ������������:map list queue��
// ���Product��Component����ɳɷ���ȷ���ģ���������������������set�ķ�ʽ�����趨��ͬʱָ��������Ա�����ֱ��������
// ��ɳɷ�(component)
// �����ɳɷ��ر����ƣ������ʹ��̳�ͬһ���࣬ʹ�ö�̬����֤Product���󴴽��������
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
