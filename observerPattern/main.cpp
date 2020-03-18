#include"AbstractSubject.h"
#include"ConcreteSubject1.h"
#include"ConcreteSubject2.h"

#include"AbstractObserver.h"
#include"ConcreteObserver1.h"
#include"ConcreteObserver2.h"

int main() {
	// �����ȴ���������������⣺ʹ��Ĭ�ϵ����ӡ�ɾ����֪ͨ�۲��ߵ���Ϊ��ʽ
	AbstractSubject* abstractSubject = new AbstractSubject();

	// �����۲��߶���1,����ӵ�abstractSubject��
	AbstractObserver* abstractObserver = new ConcreteObserver1();
	abstractSubject->addObserver(abstractObserver);

	// �����۲��߶���2������ӵ�abstractSubject��
	abstractObserver = new ConcreteObserver2();
	abstractSubject->addObserver(abstractObserver);

	// ֪ͨ���еĹ۲��ߣ������Ǹ��Դ���
	abstractSubject->notifyObservers();

	// ���ϵĳ�����ƣ�û�и�����Ϣ���Ͷ���صĹ۲��߽���֪ͨ
	// ���ǣ�һ��Subjet���Կ�����һ����Ϣ����,�Ը���Ϣ�µ����й۲���(������)������Ϣ֪ͨ(notifyObservers����)
	// �ø���Ϣ�µĹ۲���ȥ�Ը���Ϣ(��Subject)������Ӧ��ʵ����ִ����handle()������ÿ��۲��߶�������Ե�ʵ��handle��Ϊ�ķ�ʽ
	return 0;
}