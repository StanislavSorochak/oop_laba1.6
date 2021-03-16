#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba1.6/Ellipse.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Ellipse e;
			e.Init(30, 4);
			double result = e.Perimeter();
			Assert::AreEqual(result, 376.8);
		}
	};
}
