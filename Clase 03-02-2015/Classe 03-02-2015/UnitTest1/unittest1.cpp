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
			Assert::AreEqual(min(5, 10), 5);
			Assert::AreEqual(max(6,34), 34);


		}

	};
}