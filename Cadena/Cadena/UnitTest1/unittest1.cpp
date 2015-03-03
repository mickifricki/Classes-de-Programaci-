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


		TEST_METHOD(testStringEmpty)
		{
			String string1;

			Assert::AreEqual(string1.Length(), 0);
		}

		TEST_METHOD(testStringChar)
		{
			String string1("hola");

			Assert::AreEqual(string1.GetString(), "hola");
		}


		TEST_METHOD(testStringCharSame)
		{


			String string1("hola");
			String string2("hola");

			Assert::IsTrue(string1.operator == (string2));

		}

		TEST_METHOD(testStringCharNotSame)
		{
			String string1("hola");
			String string2("aloh");

			Assert::IsTrue(string1.operator != (string2));
		}

		TEST_METHOD(testStringRefSame)
		{
			String string1("hola");
			String string2("hola");

			Assert::IsTrue(string1.operator == (string2));
		}

		TEST_METHOD(testStringRefNotSame)
		{
			String string1("hola");
			String string2("aloh");

			Assert::IsTrue(string1.operator != (string2));
		}


		TEST_METHOD(testStringLength)
		{
			String string1("hola");
			string1.Length();

			Assert::AreEqual(string1.Length(), 4);


		}

		TEST_METHOD(testStringCapacity)
		{
			String string1("hola");
			string1.Capacity();
			Assert::AreEqual(string1.Capacity(), 4);
		}

		TEST_METHOD(testStringClear)
		{
			String string1("hola");
			string1.Clear();
			Assert::AreEqual(string1.Length(), 0);
			//Assert::IsTrue(strcmp(string1.GetString(),"") == 0);
		}
		TEST_METHOD(testGetString)
		{
			String string1("hola");
			Assert::AreEqual(string1.GetString(), "hola");
		}
	};
}

