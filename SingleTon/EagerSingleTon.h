#pragma once
/*
* ����ʽ������֮�䴴������
*/
class EagerSingleTon
{
private:
	EagerSingleTon();
	~EagerSingleTon();

public:
	static EagerSingleTon* getInstance();

private:
	static EagerSingleTon* m_instance;
};

