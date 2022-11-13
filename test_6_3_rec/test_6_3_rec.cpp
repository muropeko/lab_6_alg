#include "pch.h"
#include "CppUnitTest.h"
//#include "../lab_6_3_rec/lab_6_3_rec.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test63rec
{
	TEST_CLASS(test63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int j, a;
			j = (10, 0);
			Assert::AreEqual(j, 0);
		}
	};
}
