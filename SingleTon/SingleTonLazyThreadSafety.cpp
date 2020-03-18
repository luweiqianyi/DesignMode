#include "SingleTonLazyThreadSafety.h"
#include<iostream>


SingleTonLazyThreadSafety* SingleTonLazyThreadSafety::m_instance = nullptr;
std::mutex SingleTonLazyThreadSafety::m_mutex;// = new std::mutex();

SingleTonLazyThreadSafety::SingleTonLazyThreadSafety()
{
	std::cout << __FUNCTION__ << "\n";
}

/*
* SingleTonLazyThreadSafety������������ڽ�����ʱ���ͷŵ�������ʵ������
* ���������ڽ���
*/
SingleTonLazyThreadSafety::~SingleTonLazyThreadSafety()
{
	// unique_lock���������ڽ�����,���������������ᱻ����
	// lock��������������ڱ��������������������
	//std::unique_lock<std::mutex> lock(*m_mutex); 
	if (m_instance) {
		delete m_instance;
		m_instance = nullptr;
	}
	std::cout << __FUNCTION__ << "\n";
}

/*
* �����ط�ʽ�������������ʵ������������ʱ���м���
*/
SingleTonLazyThreadSafety* SingleTonLazyThreadSafety::getInstance(int i)
{
	//std::cout << __FUNCTION__ << ",mutex=" << m_mutex<<"\n";
	//if (nullptr == m_instance) {
		m_mutex.lock();
		if (nullptr == m_instance) {
			// unique_lock���������ڽ�����,���������������ᱻ����
			// lock��������������ڱ�if������ڲ�
			// std::unique_lock<std::mutex> lock(*m_mutex); // ����
			m_instance = new SingleTonLazyThreadSafety();
			std::cout << __FUNCTION__ << ": " << m_instance <<"--- i:  "<<i<< "\n";
			
		}		
		m_mutex.unlock();
	//}
	
	return m_instance;
}
