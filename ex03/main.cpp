/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalieyan <natalieyan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:13:16 by natalieyan        #+#    #+#             */
/*   Updated: 2026/02/16 16:15:00 by natalieyan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point point(5, 5);
	if (bsp(a, b, c, point))
		std::cout << "True\n";
	else
		std::cout << "False\n";
	return (0);
}
