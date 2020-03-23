#include"AbstractBuilder.h"
#include"Product.h"
#include"ConcreteBuilder1.h"
#include"ConcreteBuilder2.h"

/*
* Builderģʽ��װ��һ�����A�ڲ��������ɳɷּ���װ�䷽ʽ
* ֻͨ��һ������ӿ�����ȡ���������A
*/

// ��Ʒ���װ��ϸ����getProduct()�����ڲ�
int main() {
	AbstractBuilder* builder = new ConcreteBuilder1();
	builder->getProduct()->productInfo();

	delete builder;

	builder = new ConcreteBuilder2();
	builder->getProduct()->productInfo();

	return 0;
}