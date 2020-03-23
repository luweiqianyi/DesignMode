#pragma once
#include "AbstractComponet.h"

/*
* ����Ҫ����װ�ε���Ϊ����A ��ȡ��һ����������ʵ��Ϊ���麯��
* ����һ�����幹�����һ��װ�����࣬ʵ�������ĳ�����
* װ�������ڲ��ṩһ��ע�뷽ʽ(�����ǹ���ע�뻹�� setע��)ע����幹�����ʵ������
* ͬʱ�ṩһ���ӿڷ���(����operation())�����ø�ע���ʵ���������Ϊ����A
* �̳�װ��������ʵ�ֲ�ͬ��ʽ��װ����Ϊ��������ø���(Decorator)��operation����֤ԭ��
* ��Ϊ����ȷ���ã������ټ��ϲ�ͬ��װ����Ϊ��������
*/
class Decorator :
	public AbstractComponent
{
public:
	Decorator();
	virtual ~Decorator();
	Decorator(AbstractComponent* abstractComponent);
	// ͨ�� AbstractComponent �̳�
	virtual void operation() override;
	
protected:
	AbstractComponent* m_componnet;
};

