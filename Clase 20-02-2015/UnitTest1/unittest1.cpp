#include "stdafx.h"
#include "CppUnitTest.h"
#include "D:\Users\miquelsc4\Documents\GitHub\Classes-de-Programaci-\Clase 20-02-2015\Clase 20-02-2015\Point2f.h"

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

			punt = p2 -= p3;
			

			Assert::AreEqual(punt.fy, 6.0f);
			p2.Negate();
		

			printf("%d", p2.fx);

			
		}

	};
}