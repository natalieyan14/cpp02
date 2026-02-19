#pragma once
#include <iostream>

class Fixed
{
  private:
	int value;
	static const int fractionalBits = 8;

  public:
	Fixed();
	Fixed(const Fixed &oth);
	Fixed &operator=(const Fixed &oth);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};
