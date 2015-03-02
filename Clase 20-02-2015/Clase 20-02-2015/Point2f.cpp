#include "Point2f.h"
	////////////////////////////////
	//Functions
	////////////////////////////////

	Point2f& Point2f::SetZero()

	{
		fx = fy = 0.0f;
		return (*this);
	}

	bool Point2f::IsZero() const 

	{
		return fx == 0.0f && fy == 0.0f; 
	}

	Point2f& Point2f::Negate()

	{
		fx = -fx;
		fy = -fy;

		return (*this);
	}

	float Point2f::distanceTo(const Point2f &a)

	{
		float vx = fx - a.fx;
		float vy = fy - a.fy;
		return sqrtf((vx * vx) + (vy * vy));
	}

	////////////////////////////////
	//Operators
	////////////////////////////////

	Point2f Point2f::operator+ (const Point2f& a) const  

	{
		Point2f tmp; 
		tmp.fx = fx + a.fx;
		tmp.fy = fy + a.fy;

		return tmp; 
	}

	Point2f& Point2f::operator+= (const Point2f& a)
	{
		fx += a.fx;
		fy += a.fy;

		return(*this); 
	}

	Point2f Point2f::operator- (const Point2f& a) const
	{
		Point2f tmp;
		tmp.fx = fx - a.fx;
		tmp.fy = fy - a.fy;

		return tmp;
	}

	Point2f& Point2f::operator-= (const Point2f& a)
	{
		fx -= a.fx;
		fy -= a.fy;

		return(*this);
	}

	bool Point2f::operator== (const Point2f &a) const
	{
		return (fx == a.fx && fy == a.fy);
	}

	bool Point2f::operator!= (const Point2f &a) const
	{
		return (fx != a.fx || fy != a.fy);
	}