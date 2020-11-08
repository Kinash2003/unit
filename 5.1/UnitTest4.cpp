#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7/5.1/.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double à = 0;
			const double b = 0;
			const double c = 0;
			t = f(a, b,c);
			Assert::AreEqual(t, 1.);

		}
	};
}
