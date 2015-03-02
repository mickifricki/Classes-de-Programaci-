#ifndef _Point2f_H
#define _Point2f_H

#include "math.h"
class Point2f
{
public:

	////////////////////////////////
	//Functions
	////////////////////////////////

		Point2f& SetZero();
		bool IsZero() const;
		Point2f& Negate();
		float distanceTo(const Point2f &a);

	////////////////////////////////
	//Operators
	////////////////////////////////

		Point2f operator+ (const Point2f& a) const;
		Point2f& operator+= (const Point2f& a);
		Point2f operator- (const Point2f& a) const;
		Point2f& operator-= (const Point2f& a);
		bool operator== (const Point2f &a) const;
		bool operator!= (const Point2f &a) const;

public:
	float fx, fy;
};

#endif //_Point2f_H_

