#include "Adapter.h"
#include <iostream>

void Adapter::targetFunction()
{
	functionToBeAdapted();
	std::cout<<__FUNCTION__ << "��Ϊ����: first do functionToBeAdapted,then do another behaviour!\n";
}
