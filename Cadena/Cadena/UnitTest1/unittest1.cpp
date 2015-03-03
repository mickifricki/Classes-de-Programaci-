#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Cadena\cadena.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Agregar aquí el código de la prueba
			String a;
			
			a.operator=("hi");
			 
			a.operator+= ("hola");
		}

	};
}