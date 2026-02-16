/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalieyan <natalieyan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:44:25 by natalieyan        #+#    #+#             */
/*   Updated: 2026/02/16 16:45:12 by natalieyan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed() : value(0)
{
}
Fixed::Fixed(const int n)
{
    value = n << fractionalBits;
}
Fixed::Fixed(const float f)
{
    value = roundf(f * (1 << fractionalBits));
}
Fixed::Fixed(const Fixed &oth)
{
    value = oth.value;
}
Fixed &Fixed::operator=(const Fixed &oth)
{
    if (this != &oth)
        value = oth.value;
    return (*this);
}
Fixed::~Fixed()
{
}
int Fixed::getRawBits(void) const
{
    return (value);
}
void Fixed::setRawBits(int const raw) {
    value = raw;
}       
float Fixed::toFloat(void) const
{
    return (float)value / (1 << fractionalBits);
}
int Fixed::toInt(void) const
{    return (value >> fractionalBits);
}       
