#include "pch.h"
#include "CppUnitTest.h"
#include "../2.2/Point.h"
#include "../2.2/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point p1(3, 4), p2(1, 2);
			Point result = p1 + p2;
			Assert::AreEqual(4.0, result.getX(), L"X-coordinate mismatch");
			Assert::AreEqual(6.0, result.getY(), L"Y-coordinate mismatch");
		}
	};
}
