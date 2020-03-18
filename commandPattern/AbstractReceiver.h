#pragma once
class AbstractReceiver
{
public:
	AbstractReceiver();
	~AbstractReceiver();
	virtual void doAction(); //其实向外提供一个接口就可以了，即将此声明为纯虚函数，取消构造函数和析构函数
};

