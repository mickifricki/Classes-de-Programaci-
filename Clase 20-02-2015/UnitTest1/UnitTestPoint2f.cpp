#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Clase 20-02-2015\Point2f.h"
#include "..\Clase 20-02-2015\Point2f.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestSetZero)
		{
			Point2f a, b, c;

			a.fx = 1.0f;
			a.fy = 3.0f;

			b.fx = 1.0f;
			b.fy = 3.0f;

			a.SetZero();
			b.SetZero();

		}
		TEST_METHOD(TestIsZero)
		{
			Point2f a, b, c;

			a.fx = 0.0f;
			a.fy = 0.0f;

			Assert::IsTrue(a.IsZero());
		}

		TEST_METHOD(TestNegate)
		{
			Point2f a, b, c;

			a.fx = 2.0f;
			a.fy = 2.0f;

			a.Negate();
			Assert::AreEqual(a.fx, -2.0f);
			Assert::AreEqual(a.fy, -2.0f);
		}
		TEST_METHOD(TestAdd)
		{
			Point2f a, b, c;

			a.fx = 2.0f;
			a.fy = 2.0f;

			b.fx = 2.0f;
			b.fy = 2.0f;

			c = a.operator+(b);

			Assert::AreEqual(c.fx, 4.0f);
			Assert::AreEqual(c.fy, 4.0f);
			
		}
		TEST_METHOD(TestAddEqual)
		{
			Point2f a, b, c;

			a.fx = 2.0f;
			a.fy = 2.0f;

			b.fx = 2.0f;
			b.fy = 2.0f;

			a.operator+=(b);

			Assert::AreEqual(a.fx, 4.0f);
			Assert::AreEqual(a.fy, 4.0f);

		}
		TEST_METHOD(TestSub)
		{
			Point2f a, b, c;

			a.fx = 2.0f;
			a.fy = 2.0f;

			b.fx = 2.0f;
			b.fy = 2.0f;

			c = a.operator-(b);

			Assert::AreEqual(c.fx, 0.0f);
			Assert::AreEqual(c.fy, 0.0f);

		}
		TEST_METHOD(TestSubEqual)
		{
			Point2f a, b, c;

			a.fx = 2.0f;
			a.fy = 2.0f;

			b.fx = 2.0f;
			b.fy = 2.0f;

			a.operator-=(b);

			Assert::AreEqual(a.fx, 0.0f);
			Assert::AreEqual(a.fy, 0.0f);

		}
		TEST_METHOD(TestSame)
		{
			Point2f a, b, c;

			a.fx = 2.0f;
			a.fy = 3.0f;

			b.fx = 2.0f;
			b.fy = 3.0f;

			Assert::IsTrue(a.operator==(b));
		}
		TEST_METHOD(TestNotSame)
		{
			Point2f a, b, c;

			a.fx = 2.0f;
			a.fy = 4.0f;

			b.fx = 3.0f;
			b.fy = 5.0f;

			Assert::IsTrue(a.operator!=(b));
		}
		TEST_METHOD(TestToDistance)
		{
			Point2f a, b, c;

			a.fx = 2.0f;
			a.fy = 2.0f;

			b.fx = 6.0f;
			b.fy = 5.0f;

			Assert::AreEqual(a.distanceTo(b) , 5.0f);
		}
		TEST_METHOD(Prova)
		{
			Point2f a;
			a.fx = 1.0f;
			a.fy = 2.0f;
			Point2f b = a;

		}

			

			
	};
}