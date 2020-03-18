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
	//错误	C2672	“std::invoke”: 未找到匹配的重载函数	SingleTon	
	// E : \Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.24.28314\include\thread	43

	thread threads[NUMBER_OF_THREADS]; // 线程池
	
	for (int i = 0; i < NUMBER_OF_THREADS; i++)
	{
		threads[i] = thread(SingleTonLazyThreadSafety::getInstance,i);
		threads[i].detach(); // 将threads[i]与当前线程分离
		// threads[i].join();
	}

}

void testLazySingleTonThreadUnSafe()
{
	thread threads[NUMBER_OF_THREADS]; // 线程池

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
	线程t1和线程t2并发执行
	join()使得线程t1和t2结束之后才执行主线程

	std::thread t1(test);
	std::thread t2(test2);
	t1.join();
	t2.join();
	for (int i = 0; i < 100; i++) {
		cout << "main: i=" << i << "\n";
	}*/
	std::cout << "Over!\n";

	// !!! 在使用detach的时候主线程结束了，但是子线程没有结束，会导致程序异常终止
	system("pause"); 
	return 0;
}


/*
关于对象生命周期的说明
CPerson p1;             // main执行前，构造函数被调用，p1生命周期开始
void func() {
	static CPerson p2;  // func第一次执行前，构造函数被调用,p2生命周期开始
	CPerson p3;         // p3的构造函数被调用，p2生命周期开始
						// func结束时，p3的析构函数被调用,p3的生命周期结束
}
int main() {
	CPerson p4, * p5;    // 调用p4的构造函数,p4的生命周期开始
	func();
	p5 = new CPerson;   // 调用p5的构造函数,在堆区创建了一个CPerson对象,用指针p5指向,该对象的生命周期开始
	delete p5;          // 调用p5的析构函数，显示调用，释放p5指针指向的对象的生命周期
						// main结束时，p4的析构函数被调用,p4的生命周期结束
}
// 程序结束前，p1, p2的析构函数被调用,p1和p2的生命周期结束
*/