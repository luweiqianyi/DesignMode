#pragma once


/*
* �̲߳���ȫ������ʽ����ģʽ
*/
class SingleTon
{
private:
	SingleTon();
	~SingleTon();
public:
	// ��(Lazy Generator)��ʽ����ģʽ����ʵ���Ĵ����ӳٵ�ʹ�õ�ʱ���������
	static SingleTon* getInstance();
private:
	static SingleTon* m_instance;
};

