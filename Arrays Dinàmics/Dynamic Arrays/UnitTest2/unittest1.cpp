#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Dynamic Arrays\Dynamic Array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Agregar aquí el código de la prueba
			DynamicArray array;
			array.Reallocate(1);
			array[0] = 5;
			Assert::AreEqual(array[0], 5);
		}

	};
}