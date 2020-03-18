#pragma once
#include<mutex>
class SingleTonLazyThreadSafety
{
private:
	SingleTonLazyThreadSafety();
	~SingleTonLazyThreadSafety();
public:
	static SingleTonLazyThreadSafety* getInstance(int i);
private:
	static SingleTonLazyThreadSafety* m_instance;
	static std::mutex m_mutex;
};

