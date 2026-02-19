#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &oth)
{
	std::cout << "Copy constructor called\n";
	value = oth.value;
}

Fixed &Fixed::operator=(const Fixed &oth)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &oth)
		value = oth.value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}
