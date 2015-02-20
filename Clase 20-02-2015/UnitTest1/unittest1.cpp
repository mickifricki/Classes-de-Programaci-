#include "stdafx.h"
#include "CppUnitTest.h"
#include "C:\Users\miquelsc4\Desktop\Classes-de-Programaci-\Clase 20-02-2015\Clase 20-02-2015\Point2f.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPoint2f)
		{
			Point2f punt; 

			punt.SetZero();

			Assert::IsTrue(punt.IsZero());
		}

	};
}