#include "Point.hpp"

static Fixed	cross(Point const a, Point const b, Point const c)
{
	return ((b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY()
			- a.getY()) * (c.getX() - a.getX()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abc;
	Fixed	abp;
	Fixed	acp;
	Fixed	bcp;

	abc = cross(a, b, c);
	abp = cross(a, b, point);
	acp = cross(a, c, point);
	bcp = cross(b, c, point);
	return ((abc > 0 && abp > 0 && acp > 0 && bcp > 0) || (abc < 0 && abp < 0
			&& acp < 0 && bcp < 0));
}
