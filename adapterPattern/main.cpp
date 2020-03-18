// #include"Adaptee.h"
#include"Adapter.h"

#include<iostream>
using namespace std;

int main()
{
	// 我需要使用原始类Adaptee中的功能，同时又需要增加新的功能
	// 所以我使用了一个“类适配”的模式来对目标函数functionToBeAdapted进行了适配
	Adapter adapter;
	adapter.targetFunction();

	// 以上是通过继承的方式来实现适配器
	// 同时可以通过接口注入(set方法)的方式来实现适配器模式
	return 0;
}