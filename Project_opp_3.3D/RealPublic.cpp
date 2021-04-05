#define _USE_MATH_DEFINES
#include "RealPublic.h"
#include <iostream>
#include <cmath>
using namespace std;

RealPublic::RealPublic() :Number()
{}
RealPublic::RealPublic(double x) : Number(x)
{}
RealPublic::RealPublic(const RealPublic& m) : Number(m)
{}
double operator ^(const RealPublic& r, double value)
{
	double result;
	if (r.GetX() < 0)
	{
		return 0;
	}
	else if (value == 0)
	{
		result = 1;
	}
	else
	{
		result = pow(r.GetX(), 1 / value);
	}
	return result;
}
double RealPublic::Power(double value)
{
	return pow(M_PI, value);
}