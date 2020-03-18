#pragma once
/*
* 饿汉式单例：之间创建对象
*/
class EagerSingleTon
{
private:
	EagerSingleTon();
	~EagerSingleTon();

public:
	static EagerSingleTon* getInstance();

private:
	static EagerSingleTon* m_instance;
};

