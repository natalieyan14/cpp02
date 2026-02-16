/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalieyan <natalieyan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:46:54 by natalieyan        #+#    #+#             */
/*   Updated: 2026/02/16 16:08:46 by natalieyan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}
Point::Point(float x, float y) : x(x), y(y)
{
}
Point::Point(Point const &other) : x(other.x), y(other.y)
{
}
Point &Point::operator=(Point const &other)
{
    (void)other;
    return (*this);
}
Point::~Point()
{
}
