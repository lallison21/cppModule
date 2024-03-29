#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

private:
	Point &operator = (const Point &point);
	const Fixed x;
	const Fixed y;

public:
	Point();
	~Point();
	Point(const Point &point);
	Point(const float x, const float y);

	float getX() const ;
	float getY() const ;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
