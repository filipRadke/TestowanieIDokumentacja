#include "pch.h"
#include "CppUnitTest.h"
#include "../TestApp/TestApp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(TestIsDivisible)
	{
	public:
		
		TEST_METHOD(IsDivisibleT)	
		{
			Assert::AreEqual(true, isDivisible(4, 2));
		}
	};

	TEST_CLASS(TestIsPrime)
	{
	public:

		TEST_METHOD(IsPrimeT)
		{
			Assert::AreEqual(true, isPrime(7));
		}
	};

	TEST_CLASS(TestSummed)
	{
	public:

		TEST_METHOD(SummedT1)
		{
			Assert::AreEqual(1015, summed(10,15));
		}
		TEST_METHOD(SummedT2)
		{
			Assert::AreEqual(210, summed(2,10));
		}
	};
}
