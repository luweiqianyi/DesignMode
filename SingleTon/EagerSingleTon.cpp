#include "EagerSingleTon.h"
#include<iostream>
using namespace std;

// ����ʽ�����ĳ�ʼ��
EagerSingleTon* EagerSingleTon::m_instance = new EagerSingleTon();

EagerSingleTon::EagerSingleTon()
{
	cout << __FUNCTION__ << "\n";
}

EagerSingleTon::~EagerSingleTon()
{
	cout << __FUNCTION__ << "\n";
}

EagerSingleTon* EagerSingleTon::getInstance()
{
	return m_instance;
}
