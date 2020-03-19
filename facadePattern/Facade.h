#pragma once

class SubSystem01;
class SubSystem02;
class SubSystem03;

class Facade
{
public:
	Facade(SubSystem01* subSystem01, SubSystem02* subSystem02, SubSystem03* subSystem03);
	// 由外观类统一向外提供接口
	void uniformInterface();

private:
	SubSystem01* m_subSystem01;
	SubSystem02* m_subSystem02;
	SubSystem03* m_subSystem03;

};

