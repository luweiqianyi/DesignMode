#pragma once
#include "Subject.h"
class RealSubject;

/*
* ����ģʽ��Ӧ�ó��������ھ��к�����ģ�����Ĵ�����г�ȡ��������ʽ��
* �̶��߼�A(������ʲô������)
* �߼�B(���ݾ��峡�������仯)
* �̶��߼�C(������ʲô������)
* 
* ���Ͽɼ���AC�߼��̶���ֻ���߼�B����ž��峡�������ı䣬���Կ��Խ��߼�B
* ��ȡ��������ΪSubject���е�һ�������ӿڣ�Ȼ����ݲ�ͬ�ĳ���ȥʵ�ּ̳�
* �����ʵ������ӿڣ� ����ṩһ�������࣬һ���ӿں������߼�ABC���з�װ
* ����ʵ���˴���Ĺ���
*/
class Proxy :
	public Subject
{
public:
	Proxy();
	~Proxy();
	// ͨ�� Subject �̳�
	virtual void request() override;
	void preRequest();
	void postRequest();
private:
	RealSubject* m_realSubject;
};

/*
* �˴�����Proxy��������RealSubject�ڵ�ĳ������(��Ϊ)ִ���˴�����Proxy������
* ��һ��RealSubject���͵Ķ��󣬰󶨹�ϵ��Ϊ����
* �����ṩһ�ַ�ʽ���Դ���Subject��ͬʵ����ĺ���
*/
/*
class Proxy :
	public Subject
{
public:
	Proxy();
	~Proxy();
	void setSubject(Subject* subject); //ͨ��ע��ķ�ʽ��ȷ������ı��������
	// ͨ�� Subject �̳�
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