#pragma once
//#include "AbstractProductA.h"
//#include "AbstractProductB.h"

class AbstractProductA;
class AbstractProductB;

/*
* 抽象工厂负责创建多个产品类
* AbstractProductA和AbstractProductB是两种完全不同类型的产品，比如： 手机与汽车
* AbstractProductA类下面有各种他的具体类型，比如：小米手机 华为手机 ...
* AbstractProductB类下面有各种他的具体类型，比如：奔驰汽车 宝马汽车 ...
* 以上举的例子可能不恰当：因为手机和汽车完全是没有相关联系的物件，为什么要放在同一个抽象工厂中创建呢
* 则AbstractProductA和AbstractProductB可以取两种具有联系的物件，然后它们各自有不同的具体类型
*
*
* 抽象工厂的缺点：
* 1.每增加一种种类需要在AbstractFactory中定义接口进行创建
* 2.AbstractFactory的子类需要实现新增加的创建产品的接口
*/
class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory(); // 使用virtual修饰该析构函数，使用delete时才会找到正确的子类对象或者自己对其所管理的内存进行释放
	virtual AbstractProductA* createProductA();
	virtual AbstractProductB* createProductB();
};

