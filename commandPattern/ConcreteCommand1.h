#pragma once
#include "AbstractCommand.h"
#include"ConcreteReceiverA.h"

class ConcreteCommand1 :
	public AbstractCommand
{
public:
	// ���������Command�����ʱ���ָ���������ִ����(ִ���������)
	// �����Ҫ��չ�Ļ�������Խ�m_receiver����Ϊһ��AbstractReceiver��������ע���߼���ִ�в�ͬ��command
	ConcreteCommand1(); 
	~ConcreteCommand1();
	void executeCommand();
private:
	ConcreteReceiverA* m_receiver;
};

