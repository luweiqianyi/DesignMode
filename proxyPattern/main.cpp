#include"Proxy.h"
#include<iostream>
using namespace std;


int main()
{
	// 此处的代理仅只能绑定一种类型(即RealSubject)的被代理对象，
	// 不支持扩展到其他类型(比如Subject的其他子类类型)的被代理对象
	// 具体如何扩展已经在Proxy.h中进行了详细的说明
	Proxy* proxy = new Proxy();
	proxy->request();

	return 0;
}