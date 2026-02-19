#include "Point.hpp"

static Fixed	cross(Point const a, Point const b, Point const c)
{
	return ((b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY()
			- a.getY()) * (c.getX() - a.getX()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abp;
	Fixed	bcp;
	Fixed	cap;
	bool	has_neg;
	bool	has_pos;

	abp = cross(a, b, point);
	bcp = cross(b, c, point);
	cap = cross(c, a, point);
	has_neg = (abp < 0) || (bcp < 0) || (cap < 0);
	has_pos = (abp > 0) || (bcp > 0) || (cap > 0);
	return (!(has_neg && has_pos));
}
