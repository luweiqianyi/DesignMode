#include "SpecificProcedure2.h"
#include<iostream>

SpecificProcedure2::SpecificProcedure2()
{
	std::cout << __FUNCTION__ << "\n";
}

SpecificProcedure2::~SpecificProcedure2()
{
	std::cout << __FUNCTION__ << "\n";
}

void SpecificProcedure2::wholeProcess()
{
	std::cout << __FUNCTION__ << "\n";
	stepOne();
	stepTwo();
	stepFour();
}

void SpecificProcedure2::stepOne()
{
	std::cout << __FUNCTION__ << "\n";
}

void SpecificProcedure2::stepTwo()
{
	std::cout << __FUNCTION__ << "\n";
}

void SpecificProcedure2::stepThree()
{
	std::cout << __FUNCTION__ << "\n";
}

void SpecificProcedure2::stepFour()
{
	std::cout << __FUNCTION__ << "\n";
}
