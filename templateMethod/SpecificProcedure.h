#pragma once
#include "Procedure.h"
class SpecificProcedure :
	public Procedure
{
public:
	SpecificProcedure();
	virtual ~SpecificProcedure();
	virtual void wholeProcess();// ģ�巽��������������
protected:
	virtual void stepOne();
	virtual void stepTwo();
	virtual void stepThree();
	virtual void stepFour();
};

