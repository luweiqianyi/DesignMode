#include "SingleTonLazyThreadSafety.h"
#include<iostream>


SingleTonLazyThreadSafety* SingleTonLazyThreadSafety::m_instance = nullptr;
std::mutex SingleTonLazyThreadSafety::m_mutex;// = new std::mutex();

SingleTonLazyThreadSafety::SingleTonLazyThreadSafety()
{
	std::cout << __FUNCTION__ << "\n";
}

/*
* SingleTonLazyThreadSafety对象的生命周期结束的时候释放掉堆区的实例对象
* 其生命周期结束
*/
SingleTonLazyThreadSafety::~SingleTonLazyThreadSafety()
{
	// unique_lock的生命周期结束后,它所管理的锁对象会被解锁
	// lock对象的声明周期在本析构函数结束则结束了
	//std::unique_lock<std::mutex> lock(*m_mutex); 
	if (m_instance) {
		delete m_instance;
		m_instance = nullptr;
	}
	std::cout << __FUNCTION__ << "\n";
}

/*
* 懒加载方式创建单例对象的实例，创建对象时进行加锁
*/
SingleTonLazyThreadSafety* SingleTonLazyThreadSafety::getInstance(int i)
{
	//std::cout << __FUNCTION__ << ",mutex=" << m_mutex<<"\n";
	//if (nullptr == m_instance) {
		m_mutex.lock();
		if (nullptr == m_instance) {
			// unique_lock的生命周期结束后,它所管理的锁对象会被解锁
			// lock对象的生命周期在本if代码块内部
			// std::unique_lock<std::mutex> lock(*m_mutex); // 加锁
			m_instance = new SingleTonLazyThreadSafety();
			std::cout << __FUNCTION__ << ": " << m_instance <<"--- i:  "<<i<< "\n";
			
		}		
		m_mutex.unlock();
	//}
	
	return m_instance;
}
