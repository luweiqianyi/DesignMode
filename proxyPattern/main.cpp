#include"Proxy.h"
#include<iostream>
using namespace std;


int main()
{
	// �˴��Ĵ����ֻ�ܰ�һ������(��RealSubject)�ı��������
	// ��֧����չ����������(����Subject��������������)�ı��������
	// ���������չ�Ѿ���Proxy.h�н�������ϸ��˵��
	Proxy* proxy = new Proxy();
	proxy->request();

	return 0;
}