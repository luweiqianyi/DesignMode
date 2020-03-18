#include"SingleTon.h"
#include"EagerSingleTon.h"
#include<iostream>
#include "SingleTonLazyThreadSafety.h"
#include<functional>
#include<mutex>
#include<thread>
#define HAVE_STRUCT_TIMESPEC

#define NUMBER_OF_THREADS 100
using namespace std;

void singleTonLazyTest()
{
	SingleTon* t1 = SingleTon::getInstance();
	SingleTon* t2 = SingleTon::getInstance();
	std::cout << (t1 == t2 ? "Equal" : "Not Equal") << "\n";
}

void singleTonEagerTest()
{
	EagerSingleTon* t1 = EagerSingleTon::getInstance();
	EagerSingleTon* t2 = EagerSingleTon::getInstance();
	std::cout << (t1 == t2 ? "" : "Not ") << "Equal\n";
}


void testLazySingleTonThreadSafe()
{
	/*PTW32_DLLPORT int PTW32_CDECL pthread_create(pthread_t * tid,
		const pthread_attr_t * attr,
		void* (PTW32_CDECL * start) (void*),
		void* arg);*/
	/*pthread_t* t1 = nullptr;
	for (int i = 0; i < 10; i++)
	{
		pthread_create(t1, NULL, createLazySingleTonIntsanceThreadSafety, NULL);
		
	}
	*/
	//����	C2672	��std::invoke��: δ�ҵ�ƥ������غ���	SingleTon	
	// E : \Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.24.28314\include\thread	43

	thread threads[NUMBER_OF_THREADS]; // �̳߳�
	
	for (int i = 0; i < NUMBER_OF_THREADS; i++)
	{
		threads[i] = thread(SingleTonLazyThreadSafety::getInstance,i);
		threads[i].detach(); // ��threads[i]�뵱ǰ�̷߳���
		// threads[i].join();
	}

}

void testLazySingleTonThreadUnSafe()
{
	thread threads[NUMBER_OF_THREADS]; // �̳߳�

	for (int i = 0; i < NUMBER_OF_THREADS; i++)
	{
		threads[i] = thread(SingleTon::getInstance);
		threads[i].detach();
		//threads[i].join();
	}
}

void test() 
{
	for (int i = 0; i < 100; i++) {
		cout << "test: i=" << i << "\n";
	}
}

void test2() 
{
	for (int j = 'A'; j <= 'Z'; j++)
	{
		cout << __FUNCTION__ << ": " << j << "\n";
	}
}
int main() {
	// testLazySingleTonThreadUnSafe();
	testLazySingleTonThreadSafe();

	/*
	�߳�t1���߳�t2����ִ��
	join()ʹ���߳�t1��t2����֮���ִ�����߳�

	std::thread t1(test);
	std::thread t2(test2);
	t1.join();
	t2.join();
	for (int i = 0; i < 100; i++) {
		cout << "main: i=" << i << "\n";
	}*/
	std::cout << "Over!\n";

	// !!! ��ʹ��detach��ʱ�����߳̽����ˣ��������߳�û�н������ᵼ�³����쳣��ֹ
	system("pause"); 
	return 0;
}


/*
���ڶ����������ڵ�˵��
CPerson p1;             // mainִ��ǰ�����캯�������ã�p1�������ڿ�ʼ
void func() {
	static CPerson p2;  // func��һ��ִ��ǰ�����캯��������,p2�������ڿ�ʼ
	CPerson p3;         // p3�Ĺ��캯�������ã�p2�������ڿ�ʼ
						// func����ʱ��p3����������������,p3���������ڽ���
}
int main() {
	CPerson p4, * p5;    // ����p4�Ĺ��캯��,p4���������ڿ�ʼ
	func();
	p5 = new CPerson;   // ����p5�Ĺ��캯��,�ڶ���������һ��CPerson����,��ָ��p5ָ��,�ö�����������ڿ�ʼ
	delete p5;          // ����p5��������������ʾ���ã��ͷ�p5ָ��ָ��Ķ������������
						// main����ʱ��p4����������������,p4���������ڽ���
}
// �������ǰ��p1, p2����������������,p1��p2���������ڽ���
*/