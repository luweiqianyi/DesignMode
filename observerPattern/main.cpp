#include"AbstractSubject.h"
#include"ConcreteSubject1.h"
#include"ConcreteSubject2.h"

#include"AbstractObserver.h"
#include"ConcreteObserver1.h"
#include"ConcreteObserver2.h"

int main() {
	// 首先先创建的最基本的主题：使用默认的增加、删除、通知观察者的行为方式
	AbstractSubject* abstractSubject = new AbstractSubject();

	// 创建观察者对象1,将其加到abstractSubject下
	AbstractObserver* abstractObserver = new ConcreteObserver1();
	abstractSubject->addObserver(abstractObserver);

	// 创建观察者对象2，将其加到abstractSubject下
	abstractObserver = new ConcreteObserver2();
	abstractSubject->addObserver(abstractObserver);

	// 通知所有的观察者，让它们各自处理
	abstractSubject->notifyObservers();

	// 以上的程序设计，没有根据消息类型对相关的观察者进行通知
	// 但是，一个Subjet可以看作是一个消息类型,对该消息下的所有观察者(监听者)进行消息通知(notifyObservers函数)
	// 让该消息下的观察者去对该消息(该Subject)进行响应，实质是执行了handle()方法，每类观察者都有其各自的实现handle行为的方式
	return 0;
}