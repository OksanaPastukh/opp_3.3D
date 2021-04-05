#define _USE_MATH_DEFINES
#include "RealPrivate.h"
#include <iostream>
#include <cmath>
using namespace std;

RealPrivate::RealPrivate() :Number()
{}
RealPrivate::RealPrivate(double x) : Number(x)
{}
RealPrivate::RealPrivate(const RealPrivate& m) : Number(m)
{}
RealPrivate& RealPrivate::operator = (const RealPrivate& m)
{
	Number::operator=(m);
	return *this;
}
istream& operator >> (istream& in, RealPrivate& m)
{
	double x;
	cout << " Enter the value =  ";in >> x;
	m.SetX(x);
	cout << endl;
	return in;
}
RealPrivate::operator string () const
{
	return Number::operator std::string();

}
ostream& operator << (ostream& out, const RealPrivate& p)
{
	out << string(p);
	return out;
}
double operator ^(const RealPrivate& r, double value)
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
double RealPrivate::Power(double value)
{
	return pow(M_PI, value);
}