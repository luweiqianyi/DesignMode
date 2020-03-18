#include"Procedure.h"
#include"SpecificProcedure.h"
#include"SpecificProcedure2.h"
#include<iostream>
using namespace std;

int main()
{
	Procedure* procedure = new SpecificProcedure();
	procedure->wholeProcess();

	delete procedure;
	std::cout << "\n\n";

	procedure = new SpecificProcedure2();
	procedure->wholeProcess();

	delete procedure;
	procedure = nullptr;

	return 0;
}