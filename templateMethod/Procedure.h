#pragma once
class Procedure
{
public:
	Procedure();
	virtual ~Procedure();
	virtual void wholeProcess();// 模板方法处理整个过程
protected: // 对外界隐藏内部细节
	virtual void stepOne();
	virtual void stepTwo();
	virtual void stepThree();
	virtual void stepFour();
};

