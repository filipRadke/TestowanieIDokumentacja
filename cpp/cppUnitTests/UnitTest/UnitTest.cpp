#include "pch.h"
#include "CppUnitTest.h"
#include "../TestApp/TestApp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(UnitIsDivisibleT)
		{
			Assert::AreEqual(true, isDivisible(4, 2));
		}
		TEST_METHOD(UnitIsDivisibleF)
		{
			Assert::AreEqual(true, isDivisible(5, 3));
		}
	};
}
