#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_6.1_it/PR_6.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest061it
{
    TEST_CLASS(UnitTest061it)
    {
    public:
        TEST_METHOD(TestCountAndSum)
        {
            int testArr[] = { -14, -10, -5, 0, 3, 4, -2 };
            const int n = 7;
            Assert::AreEqual(4, Count(testArr, n));
            Assert::AreEqual(-26, Sum(testArr, n));

            Replace(testArr, n);
            Assert::AreEqual(0, testArr[0]);
            Assert::AreEqual(0, testArr[1]);
            Assert::AreEqual(-5, testArr[2]);
            Assert::AreEqual(0, testArr[3]);
            Assert::AreEqual(3, testArr[4]);
            Assert::AreEqual(4, testArr[5]);
            Assert::AreEqual(0, testArr[6]);
        }
    };
}
