#include "MyMath.h"
namespace MyMath
{
	double MyMath::Operations::sum(double a, double b)
	{
		return a + b;
	}

	double MyMath::Operations::sub(double a, double b)
	{
		return a - b;
	}

	double MyMath::Operations::mult(double a, double b)
	{
		return a * b;
	}

	double MyMath::Operations::div(double a, double b)
	{
		if (b != 0)
			return a / b;
		else
			throw "Divide by zero";
	}
}