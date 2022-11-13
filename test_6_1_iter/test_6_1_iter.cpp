#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_1_alg/lab_6_1_alg.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test61iter
{
	TEST_CLASS(test61iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q;
			q = (22, -40, 50, 0);
			Assert::AreEqual(q, 0);

		}
	};
}
