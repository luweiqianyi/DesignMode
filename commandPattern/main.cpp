#include"ConcreteCommand1.h"
#include"ConcreteCommand2.h"
#include<iostream>
using namespace std;

/*
* ����ģʽ�Ͳ���ģʽ�е����񰡣�ֻ��������ģʽ�İ󶨹�ϵ��Ϊ����
* ����ģʽ�İ󶨹�ϵ��Ϊ���
*/

// ����ģʽ�Ķ�̬��������Ľ���������ʵ�־����������Ϊ������doAction()�����ڲ�����ʵ��
int main() {
	// ִ��Command,�۲캯����Ϊ
	// �����Command�����ڲ���װ�˾����ִ���ߣ�ʹ��ĳ����������ֻ��
	// ��ĳ��ִ����ִ��
	// �����Ҫʹ��ĳ��ִ����ִ�У���Ҫ�����ṩһ���ӿڣ�����ͬ��Ĳ�ִͬ���߶���
	ConcreteCommand1* command1 = new ConcreteCommand1();
	command1->executeCommand();

	cout << "\n\n";

	ConcreteCommand2* command2 = new ConcreteCommand2();
	command2->executeCommand();
	return 0;
}