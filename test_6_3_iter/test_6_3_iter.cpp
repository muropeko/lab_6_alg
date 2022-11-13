#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_3_alg/lab_6_3_alg.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test63iter
{
	TEST_CLASS(test63iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int j, a;
			j = ( 10, 0);
			Assert::AreEqual(j, 0);
		}
	};
}
