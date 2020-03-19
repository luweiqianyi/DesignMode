#include "Proxy.h"
#include"RealSubject.h"
#include <iostream>

Proxy::Proxy()
{
	m_realSubject = new RealSubject();
}

Proxy::~Proxy()
{
	if (nullptr != m_realSubject) {
		delete m_realSubject;
		m_realSubject = nullptr;
	}
}

void Proxy::request()
{
	preRequest();
	if (nullptr != m_realSubject) {
		m_realSubject->request();
	}
	else {
		std::cout << "被代理的对象不存在!\n";
	}	
	postRequest();
}

void Proxy::preRequest()
{
	std::cout << "execute preRequest()!\n";
}

void Proxy::postRequest()
{
	std::cout << "execute postRequest()!\n";
}
