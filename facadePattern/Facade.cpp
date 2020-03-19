#include "Facade.h"
#include "SubSystem01.h"
#include "SubSystem02.h"
#include "SubSystem03.h"

Facade::Facade(SubSystem01* subSystem01, SubSystem02* subSystem02, SubSystem03* subSystem03) :
	m_subSystem01(subSystem01), m_subSystem02(subSystem02), m_subSystem03(subSystem03) 
{
}


//Facade::Facade(SubSystem01* subSystem01, SubSystem02* subSystem02, SubSystem03* subSystem03)
//{
//	m_subSystem01 = subSystem01;
//	m_subSystem02 = subSystem02;
//	m_subSystem03 = subSystem03;
//}

void Facade::uniformInterface()
{
	m_subSystem01->method1();
	m_subSystem02->method2();
	m_subSystem03->method3();
}
