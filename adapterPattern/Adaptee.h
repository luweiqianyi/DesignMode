#pragma once

/*
* 一个由任意第三方完成的一个类接口
*/
class Adaptee
{
public:
	Adaptee();
	~Adaptee();

public:
	void functionToBeAdapted();
};

