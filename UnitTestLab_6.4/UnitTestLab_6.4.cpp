#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_6.4.IT/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab64
{
	TEST_CLASS(UnitTestLab64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a[] = { 1.0,2.0,3.0,4.0,5.0,6.0, };
			int n = 6;
			double p = Sum(a, n);
			Assert::AreEqual(p, 15,0);
		}
	};
}
