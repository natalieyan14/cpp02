#include "Point.hpp"

Point ::Point() : x(0), y(0)
{
}

Point ::Point(float x_arg, float y_arg) : x(x_arg), y(y_arg)
{
}

Point ::Point(Point const &other) : x(other.x), y(other.y)
{
}

Point &Point::operator=(Point const &other)
{
	(void)other;
	return (*this);
}

Point ::~Point()
{
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}
