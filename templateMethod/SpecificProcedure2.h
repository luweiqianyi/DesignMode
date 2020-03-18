#pragma once
#include "Procedure.h"
class SpecificProcedure2 :
	public Procedure
{
public:
	SpecificProcedure2();
	virtual ~SpecificProcedure2();
	virtual void wholeProcess();// 模板方法处理整个过程
protected:
	virtual void stepOne();
	virtual void stepTwo();
	virtual void stepThree();
	virtual void stepFour();
};

