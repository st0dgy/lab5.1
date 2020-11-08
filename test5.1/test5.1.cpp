#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test51
{
	TEST_CLASS(test51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = g(1, 1);
			Assert::AreEqual(t, 0.5);

		}
	};
}
