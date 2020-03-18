#pragma once
#include"Adaptee.h"
/*
* 继承待适配的类以对其内部的某些函数进行适配
* 方便得到目标输出
*/
class Adapter : Adaptee
{
public:
	void targetFunction();
};

