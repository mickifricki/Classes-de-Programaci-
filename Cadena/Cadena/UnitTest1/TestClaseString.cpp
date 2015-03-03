#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Cadena\cadena.h"
#include "..\Cadena\cadena.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:


		TEST_METHOD(testStringIsEmpty)
		{
			String string1;

			Assert::AreEqual(string1.Length(), 0);
		}

		TEST_METHOD(testStringCh)
		{
			String string1("high");

			Assert::AreEqual(string1.GetString(), "high");
		}


		TEST_METHOD(testStringChEqual)
		{


			String string1("high");
			String string2("high");

			Assert::IsTrue(string1.operator == (string2));

		}

		TEST_METHOD(testStringCharNotSame)
		{
			String string1("high");
			String string2("hgih");

			Assert::IsTrue(string1.operator != (string2));
		}

		TEST_METHOD(testStringRefEqual)
		{
			String string1("high");
			String string2("high");

			Assert::IsTrue(string1.operator == (string2));
		}

		TEST_METHOD(testStringRefNotEqual)
		{
			String string1("high");
			String string2("hgih");

			Assert::IsTrue(string1.operator != (string2));
		}


		TEST_METHOD(testStringLength)
		{
			String string1("high");
			string1.Length();

			Assert::AreEqual(string1.Length(), 4);


		}

		TEST_METHOD(testStringCapacity)
		{
			String string1("high");
			string1.Capacity();
			Assert::AreEqual(string1.Capacity(), 4);
		}

		TEST_METHOD(testStringClear)
		{
			String string1("high");
			string1.Clear();
			Assert::AreEqual(string1.Length(), 0);
			
		}
		TEST_METHOD(testGetString)
		{
			String string1("high");
			Assert::AreEqual(string1.GetString(), "high");
		}
	};
}

