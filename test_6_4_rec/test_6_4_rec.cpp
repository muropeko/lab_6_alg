#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_4_rec/lab_6_4_rec.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test64rec
{
	TEST_CLASS(test64rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q, a, b;
			q = (0, 10, 1, 10, 0);
			Assert::AreEqual(q, 0);
		}
	};
}
