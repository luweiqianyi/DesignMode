#pragma once
#include "AbstractRole.h"

class Role1 :
	public AbstractRole
{
public:
	// C++��protected�����ĺ����ǲ��ܱ������з��ʵģ�
	// protected���εĹ��췽����������㴴������
	// Java��protected�����ĺ�����ͬһ��package�µ���
	// ������Զ�����з��ʣ�ͬʱͬһ��package�¿��Խ�
	// �ж���Ĵ���
	Role1(Implementor* implementor);
public:
	void operation();

protected:
	Implementor* m_implementor; // �ͽ�����ԭ��
};

