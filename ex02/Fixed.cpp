#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const Fixed &oth)
{
	value = oth.value;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &oth)
{
	if (this != &oth)
		value = oth.value;
	return (*this);
}

Fixed::Fixed(int n)
{
	value = n << fractionalBits;
}

Fixed::Fixed(float f)
{
	value = roundf(f * (1 << fractionalBits));
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)value / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
	return (value >> fractionalBits);
}

bool Fixed::operator>(const Fixed &oth) const
{
	return (value > oth.value);
}
bool Fixed::operator<(const Fixed &oth) const
{
	return (value < oth.value);
}
bool Fixed::operator>=(const Fixed &oth) const
{
	return (value >= oth.value);
}
bool Fixed::operator<=(const Fixed &oth) const
{
	return (value <= oth.value);
}
bool Fixed::operator==(const Fixed &oth) const
{
	return (value == oth.value);
}
bool Fixed::operator!=(const Fixed &oth) const
{
	return (value != oth.value);
}

Fixed Fixed::operator+(const Fixed &oth) const
{
	return (Fixed(this->toFloat() + oth.toFloat()));
}

Fixed Fixed::operator-(const Fixed &oth) const
{
	return (Fixed(this->toFloat() - oth.toFloat()));
}

Fixed Fixed::operator*(const Fixed &oth) const
{
	return (Fixed(this->toFloat() * oth.toFloat()));
}

Fixed Fixed::operator/(const Fixed &oth) const
{
	return (Fixed(this->toFloat() / oth.toFloat()));
}

Fixed &Fixed::operator++()
{
	value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	value += 1;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	value -= 1;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
