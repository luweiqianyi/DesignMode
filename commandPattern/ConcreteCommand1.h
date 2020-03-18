#pragma once
#include "AbstractCommand.h"
#include"ConcreteReceiverA.h"

class ConcreteCommand1 :
	public AbstractCommand
{
public:
	// 创建具体的Command对象的时候就指定了特殊的执行者(执行命令的人)
	// 如果需要扩展的话，则可以将m_receiver声明为一个AbstractReceiver对象，增加注入逻辑以执行不同的command
	ConcreteCommand1(); 
	~ConcreteCommand1();
	void executeCommand();
private:
	ConcreteReceiverA* m_receiver;
};

