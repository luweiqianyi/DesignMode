#include "FlyweightFactory.h"
#include "Flyweight.h"

#include<iostream>


// 享元模式
// 用工厂来维护一个享元对象池(可以是用map来存放创建的享元对象)
// 根据键来查询某享元对象是否存在，如果不存在则创建
// 存在一个问题：创建无限大的享元对象池的情况一定会出现
int main()
{
	FlyweightFactory* factory = new FlyweightFactory();
	Flyweight* flyweight = factory->getFlyweight("1");
	flyweight->operation();

	flyweight = factory->getFlyweight("2");
	flyweight->operation();

	flyweight = factory->getFlyweight("1");
	flyweight->operation();
	return 0;
}