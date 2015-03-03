#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Classe 03-02-2015\Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 2;
			int b = 3;
			swap(a, b);
			printf("%d" "%d", a, b);

			Assert::AreEqual(a, 3);
			Assert::AreEqual(b, 2);
		}

	};
}