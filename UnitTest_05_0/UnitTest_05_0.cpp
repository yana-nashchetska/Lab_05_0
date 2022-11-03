#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_0/Lab_05_0cpp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest050
{
	TEST_CLASS(UnitTest050)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2, -5);
			Assert::AreEqual(t, 3.34483, 0.0001);
		}
	};    
}
