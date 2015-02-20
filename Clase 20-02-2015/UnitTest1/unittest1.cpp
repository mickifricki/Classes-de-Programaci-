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
			Point2f punt, p2, p3;

			p2.fx = 1.0f;
			p2.fy = 3.0f;

			p3.fx = 1.0f;
			p3.fy = 3.0f;

			punt = p2 + p3;

			Assert::AreEqual(punt.fx, 2.0f);
			Assert::Are

			
		}

	};
}