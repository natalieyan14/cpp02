/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalieyan <natalieyan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:40:34 by natalieyan        #+#    #+#             */
/*   Updated: 2026/02/16 16:06:47 by natalieyan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
