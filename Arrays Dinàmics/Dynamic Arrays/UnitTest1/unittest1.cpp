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
			// TODO: Agregar aqu� el c�digo de la prueba
			DynamicArray array;
			array.Reallocate(5);
			array[0] = 1;
			array[1] = 2;
			array[2] = 3;
			array[3] = 4;
			array[4] = 5;
			array.Insert(8, 3);
			Assert::AreEqual(array[3], 8);
			Assert::AreEqual(array[4], 4);
		}

	};
}