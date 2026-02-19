#pragma once
#include "Fixed.hpp"
#include <cmath>
#include <iostream>

class Point
{
  private:
	Fixed const x;
	Fixed const y;

  public:
	Point();
	Point(float x, float y);
	Point(Point const &other);
	Point &operator=(Point const &other);
	~Point();

	Fixed getX() const;
	Fixed getY() const;
};
