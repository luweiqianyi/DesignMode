#include "ConcreteBuilder1.h"
#include "ProductComponentA.h"
#include "ProductComponentB.h"
#include "ProductComponentC.h"
#include "Product.h"
ConcreteBuilder1::ConcreteBuilder1()
{
	m_product = new Product();
}
ConcreteBuilder1::~ConcreteBuilder1()
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
void ConcreteBuilder1::buildPartA()
{
	if (m_product) {
		m_product->setComponentA(new ProductComponentA());
	}	
}

void ConcreteBuilder1::buildPartB()
{
	if (m_product) {
		m_product->setComponentB(new ProductComponentB());
	}
	
}

void ConcreteBuilder1::buildPartC()
{
	if (m_product) {
		m_product->setComponentC(new ProductComponentC());
	}
}

Product* ConcreteBuilder1::getProduct()
{
	if (nullptr != m_product) {
		buildPartA();
		buildPartB();
		buildPartC();
	}
	return m_product;
}
