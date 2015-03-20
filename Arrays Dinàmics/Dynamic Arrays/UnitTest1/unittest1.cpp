#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Dynamic Arrays\Dynamic Array.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Agregar aquí el código de la prueba
			DynamicArray array;
			array.Reallocate(10);
			array[0] = 1;
			array[1] = 2;
			array[2] = 3;
			array[3] = 4;
			array[4] = 5;
			array[5] = 6;
			array[6] = 7;
			array[7] = 8;
			array[8] = 9;
			array[9] = 10;
			array.Insert(8, 0);
			Assert::AreEqual(array[0], 8);
			Assert::AreEqual(array[1], 1);
			Assert::AreEqual(array[2], 2);
			Assert::AreEqual(array[3], 3);
			Assert::AreEqual(array[4], 4);
			Assert::AreEqual(array[5], 5);
			Assert::AreEqual(array[6], 6);
			Assert::AreEqual(array[7], 7);
			Assert::AreEqual(array[8], 8);
			Assert::AreEqual(array[9], 9);
			Assert::AreEqual(array[10], 10);
		}

	};
}