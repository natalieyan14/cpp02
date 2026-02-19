/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalieyan <natalieyan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:13:16 by natalieyan        #+#    #+#             */
/*   Updated: 2026/02/19 19:41:46 by natalieyan       ###   ########.fr       */
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
	Point first; // def ctor - true
	Point second(4,4); // ctor with arg - true
	Point third(second); // copy ctor - true
	Point fourth(10,10); // ctor with arg - false
	Point fifth = fourth;// copy ctor - false
	Point sixth;
	sixth = fifth; // op= - true
	std::cout << sixth.getX();
	if (bsp(a, b, c, first))
		std::cout << "True\n";
	else
		std::cout << "False\n";
	std :: cout <<std :: endl;
	
	if (bsp(a, b, c, second))
		std::cout << "True\n";
	else
		std::cout << "False\n";
	std :: cout <<std :: endl;

	if (bsp(a, b, c, third))
		std::cout << "True\n";
	else
		std::cout << "False\n";
	std :: cout <<std :: endl;
	
	if (bsp(a, b, c, fourth))
		std::cout << "True\n";
	else
		std::cout << "False\n";
	std :: cout <<std :: endl;
	
	if (bsp(a, b, c, fifth))
		std::cout << "True\n";
	else
		std::cout << "False\n";
	std :: cout <<std :: endl;
	
	if (bsp(a, b, c, sixth))
		std::cout << "True\n";
	else
		std::cout << "False\n";
	std :: cout <<std :: endl;
}
	