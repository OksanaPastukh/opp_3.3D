#include "pch.h"
#include "CppUnitTest.h"
#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES
#include <cmath>
#include "../Project_opp_3.3D/Number.cpp"
#include "../Project_opp_3.3D/RealPublic.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp33D
{
	TEST_CLASS(UnitTestopp33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			RealPublic r;
			c = r.Power(0);
			Assert::AreEqual(c, 1.0);
		}
	};
}
