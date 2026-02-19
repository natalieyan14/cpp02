#pragma once
#include <cmath>
#include <iostream>

class Fixed
{
  private:
	int value;
	static const int fractionalBits = 8;

  public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &oth);
	Fixed &operator=(const Fixed &oth);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
