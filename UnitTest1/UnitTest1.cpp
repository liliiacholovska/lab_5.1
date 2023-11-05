#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double expected = (pow(x, 2) / 2 - pow(x, 4) / 24 - 1);
			double actual = t(x);

			Assert::AreEqual(expected, actual);
		}
	};
