#pragma once
class Procedure
{
public:
	Procedure();
	virtual ~Procedure();
	virtual void wholeProcess();// ģ�巽��������������
protected: // ����������ڲ�ϸ��
	virtual void stepOne();
	virtual void stepTwo();
	virtual void stepThree();
	virtual void stepFour();
};

