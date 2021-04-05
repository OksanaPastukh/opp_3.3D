#pragma once
#include "Number.h"
using namespace std;
class RealPrivate:private Number
{
public:
	RealPrivate();
	RealPrivate(double);
	RealPrivate(const RealPrivate&);

	friend ostream& operator << (ostream& out, const RealPrivate& r);
	friend istream& operator >> (istream& in, RealPrivate& r);
	operator string () const;
	RealPrivate& operator = (const RealPrivate&);

	friend double operator ^ (const RealPrivate&, double value);
	static double Power(double value);
};

