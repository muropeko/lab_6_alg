#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_1_rec/lab_6_1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test61rec
{
	TEST_CLASS(test61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q, a;
			q = Sum(a, 3, 0);
			Assert::AreEqual(q, 5);
		}
	};
}
