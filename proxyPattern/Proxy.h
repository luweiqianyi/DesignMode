#pragma once
#include "Subject.h"
class RealSubject;

/*
* 代理模式的应用场景：对于具有很类似模板代码的代码进行抽取，如下形式：
* 固定逻辑A(不管在什么场景下)
* 逻辑B(根据具体场景发生变化)
* 固定逻辑C(不管在什么场景下)
* 
* 由上可见，AC逻辑固定，只有逻辑B会跟着具体场景发生改变，所以可以将逻辑B
* 提取出来，作为Subject类中的一个函数接口，然后根据不同的场景去实现继承
* 这个类实现这个接口， 最后提供一个代理类，一个接口函数对逻辑ABC进行封装
* 最终实现了代理的功能
*/
class Proxy :
	public Subject
{
public:
	Proxy();
	~Proxy();
	// 通过 Subject 继承
	virtual void request() override;
	void preRequest();
	void postRequest();
private:
	RealSubject* m_realSubject;
};

/*
* 此代理类Proxy对象仅针对RealSubject内的某个函数(行为)执行了代理，在Proxy中生成
* 了一个RealSubject类型的对象，绑定关系较为死板
* 以下提供一种方式可以代理Subject不同实现类的函数
*/
/*
class Proxy :
	public Subject
{
public:
	Proxy();
	~Proxy();
	void setSubject(Subject* subject); //通过注入的方式来确定具体的被代理对象
	// 通过 Subject 继承
	virtual void request() override;
	void preRequest();
	void postRequest();
private:
	Subject* m_subject;
};
Proxy::Proxy() {
	// do nothing
}
void Proxy::setSubject(Subject* subject) {
	m_subject = subject;
}
Proxy::~Proxy() {
	if (nullptr != m_subject) {
		delete m_subject;
		m_subject = nullptr;
	}
}
*/