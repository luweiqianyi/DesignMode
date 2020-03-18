#pragma once


/*
* 线程不安全的懒汉式单例模式
*/
class SingleTon
{
private:
	SingleTon();
	~SingleTon();
public:
	// 懒(Lazy Generator)汉式单例模式，将实例的创建延迟到使用的时候进行生成
	static SingleTon* getInstance();
private:
	static SingleTon* m_instance;
};

