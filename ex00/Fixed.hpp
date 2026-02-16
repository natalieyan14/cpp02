/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalieyan <natalieyan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:08:26 by natalieyan        #+#    #+#             */
/*   Updated: 2026/02/13 13:46:01 by natalieyan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
