#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Lab_08.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string input = "Hello!123 world";
			string expected = "Hello";
			Assert::AreEqual(expected, RemoveNonLettersBeforeFirstSpace(input));
		}
	};
}
