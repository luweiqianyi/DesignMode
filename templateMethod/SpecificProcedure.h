#pragma once
#include "Procedure.h"
class SpecificProcedure :
	public Procedure
{
public:
	SpecificProcedure();
	virtual ~SpecificProcedure();
	virtual void wholeProcess();// 模板方法处理整个过程
protected:
	virtual void stepOne();
	virtual void stepTwo();
	virtual void stepThree();
	virtual void stepFour();
};

