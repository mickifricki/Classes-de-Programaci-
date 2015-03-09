#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Clase 06-03-2015\ClassList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Agregar aquí el código de la prueba
			SList Lista;
			int a;
			Lista.Add(-2);
			a = Lista.Count();
			Assert::AreEqual(a, 5);


		}

	};
}