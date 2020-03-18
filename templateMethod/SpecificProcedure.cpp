#include "SpecificProcedure.h"
#include<iostream>


SpecificProcedure::SpecificProcedure()
{
	std::cout << __FUNCTION__ << "\n";
}

SpecificProcedure::~SpecificProcedure()
{
	std::cout << __FUNCTION__ << "\n";
}

void SpecificProcedure::wholeProcess()
{
	std::cout << __FUNCTION__ << "\n";
	stepOne();
	stepTwo();
	stepThree();
	stepFour();
}

void SpecificProcedure::stepOne()
{
	std::cout << __FUNCTION__ << "\n";
}

void SpecificProcedure::stepTwo()
{
	std::cout << __FUNCTION__ << "\n";
}

void SpecificProcedure::stepThree()
{
	std::cout << __FUNCTION__ << "\n";
}

void SpecificProcedure::stepFour()
{
	std::cout << __FUNCTION__ << "\n";
}
