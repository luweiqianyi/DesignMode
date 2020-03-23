#include"AbstractBuilder.h"
#include"Product.h"
#include"ConcreteBuilder1.h"
#include"ConcreteBuilder2.h"

/*
* Builder模式封装了一个组件A内部具体的组成成分及其装配方式
* 只通过一个对外接口来获取完整的组件A
*/

// 产品类的装配细节在getProduct()函数内部
int main() {
	AbstractBuilder* builder = new ConcreteBuilder1();
	builder->getProduct()->productInfo();

	delete builder;

	builder = new ConcreteBuilder2();
	builder->getProduct()->productInfo();

	return 0;
}