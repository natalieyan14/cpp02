/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalieyan <natalieyan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:55:53 by natalieyan        #+#    #+#             */
/*   Updated: 2026/02/14 18:48:22 by natalieyan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Fixed(const Fixed &oth);
	~Fixed();
	Fixed &operator=(const Fixed &oth);

	Fixed(int n);
	Fixed(float f);

	float toFloat(void) const;
	int toInt(void) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);

	bool operator>(const Fixed &oth) const;
	bool operator<(const Fixed &oth) const;
	bool operator>=(const Fixed &oth) const;
	bool operator<=(const Fixed &oth) const;
	bool operator==(const Fixed &oth) const;
	bool operator!=(const Fixed &oth) const;

	Fixed operator+(const Fixed &oth) const;
	Fixed operator-(const Fixed &oth) const;
	Fixed operator*(const Fixed &oth) const;
	Fixed operator/(const Fixed &oth) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);