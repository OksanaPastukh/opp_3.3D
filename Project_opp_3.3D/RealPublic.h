#pragma once
#include "Number.h"
using namespace std;
class RealPublic : public Number
{
public:
	RealPublic();
	RealPublic(double);
	RealPublic(const RealPublic&);

	friend double operator ^ (const RealPublic&, double value);
	static double Power(double value);
};

