#include"AbstractRole.h"
#include"Role1.h"
#include"Role2.h"
#include"Implementor.h"
#include"ConcreteImplementorA.h"
#include"ConcreteImplementorB.h"
#include<iostream>

/*
* 以网上一个生产咖啡的案例说明：
* 咖啡有 大小和甜度 两个属性 ，假设大小有M种尺寸，甜度有N种程度
* 若是提供一个接口(getCoffee)以实现制作不同种类的咖啡,对于子类来说，
* 我需要创建M*N个子类，并对应实现getCoffee方法才能涵盖所有的咖啡类型
*
* 桥接模式仅是将一个从属性(比如甜度)注入到另一个属性(比如大小)中，
* 上层通过调用主属性类中的生产咖啡的代码就可以获取某一类型的咖啡
* 此时若是需要涵盖所有的咖啡类型，则指需要创建M+N个子类就可以了
* 大大降低了类的创建
*
* 
* 桥接模式所带来的优势： 将类的创建的工作量下降了好多个数量集
*/
int main()
{
	// main函数相当于一个外层客户端的角色(想同时使用A和B)
	// 1.本main函数是最上层逻辑
	// 2.创建待进行连接(桥接)的部分A：Implementor的某个子类实例对象
	Implementor* implementor = new ConcreteImplementorA();
	// 3.创建待进行连接(桥接)的部分B: AbstractRole的某个子类实例对象
	AbstractRole* abstractRole = new Role1(implementor);
	// 4.输出查看桥接效果
	abstractRole->operation(); 
	
	std::cout << "\n\n桥接上另一种类型:\n";
	delete implementor; //释放掉空间,不要造成内存泄漏
	implementor = new ConcreteImplementorB();
	delete abstractRole;
	// 创建了一个新的Role1对象，如果需要使用原来的Role1对象，可以提供一个set接口对Implementor的实现类对象进行注入
	// 没有提供set接口显得很蠢，不灵活
	abstractRole = new Role1(implementor); 
	abstractRole->operation();
	return 0;
}