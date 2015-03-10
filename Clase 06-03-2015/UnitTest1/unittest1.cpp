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
			Lista.AddLast(2);
			Lista.AddLast(2);
			Lista.AddLast(2);
			Lista.AddStart(6);
			Lista.AddLast(2);
			Lista.DelNodePos(3);
			a = Lista.Count();
			Assert::AreEqual(a, 4);


		}

	};
}