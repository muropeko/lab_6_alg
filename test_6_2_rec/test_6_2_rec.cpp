#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test62rec
{
	TEST_CLASS(test62rec)
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
