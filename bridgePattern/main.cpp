#include"AbstractRole.h"
#include"Role1.h"
#include"Role2.h"
#include"Implementor.h"
#include"ConcreteImplementorA.h"
#include"ConcreteImplementorB.h"
#include<iostream>

/*
* ������һ���������ȵİ���˵����
* ������ ��С����� �������� �������С��M�ֳߴ磬�����N�̶ֳ�
* �����ṩһ���ӿ�(getCoffee)��ʵ��������ͬ����Ŀ���,����������˵��
* ����Ҫ����M*N�����࣬����Ӧʵ��getCoffee�������ܺ������еĿ�������
*
* �Ž�ģʽ���ǽ�һ��������(�������)ע�뵽��һ������(�����С)�У�
* �ϲ�ͨ���������������е��������ȵĴ���Ϳ��Ի�ȡĳһ���͵Ŀ���
* ��ʱ������Ҫ�������еĿ������ͣ���ָ��Ҫ����M+N������Ϳ�����
* ��󽵵�����Ĵ���
*
* 
* �Ž�ģʽ�����������ƣ� ����Ĵ����Ĺ������½��˺ö��������
*/
int main()
{
	// main�����൱��һ�����ͻ��˵Ľ�ɫ(��ͬʱʹ��A��B)
	// 1.��main���������ϲ��߼�
	// 2.��������������(�Ž�)�Ĳ���A��Implementor��ĳ������ʵ������
	Implementor* implementor = new ConcreteImplementorA();
	// 3.��������������(�Ž�)�Ĳ���B: AbstractRole��ĳ������ʵ������
	AbstractRole* abstractRole = new Role1(implementor);
	// 4.����鿴�Ž�Ч��
	abstractRole->operation(); 
	
	std::cout << "\n\n�Ž�����һ������:\n";
	delete implementor; //�ͷŵ��ռ�,��Ҫ����ڴ�й©
	implementor = new ConcreteImplementorB();
	delete abstractRole;
	// ������һ���µ�Role1���������Ҫʹ��ԭ����Role1���󣬿����ṩһ��set�ӿڶ�Implementor��ʵ����������ע��
	// û���ṩset�ӿ��Եúܴ��������
	abstractRole = new Role1(implementor); 
	abstractRole->operation();
	return 0;
}