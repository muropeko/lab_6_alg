#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_2_alg/lab_6_2_alg.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test62iter
{
	TEST_CLASS(test62iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int m;
			m = (1, 1, -10, 10);
			Assert::AreEqual(m, 10);
		}
	};
}
