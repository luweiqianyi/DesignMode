// #include"Adaptee.h"
#include"Adapter.h"

#include<iostream>
using namespace std;

int main()
{
	// ����Ҫʹ��ԭʼ��Adaptee�еĹ��ܣ�ͬʱ����Ҫ�����µĹ���
	// ������ʹ����һ���������䡱��ģʽ����Ŀ�꺯��functionToBeAdapted����������
	Adapter adapter;
	adapter.targetFunction();

	// ������ͨ���̳еķ�ʽ��ʵ��������
	// ͬʱ����ͨ���ӿ�ע��(set����)�ķ�ʽ��ʵ��������ģʽ
	return 0;
}