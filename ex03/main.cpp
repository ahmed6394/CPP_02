/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:50:10 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/13 16:57:39 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	    // Define triangle vertices
		Point a(0.0f, 0.0f);
		Point b(5.0f, 0.0f);
		Point c(0.0f, 5.0f);
		
		// Test points
		Point inside(1.0f, 1.0f);
		Point outside(6.0f, 6.0f);
		Point edge(2.5f, 0.0f);     // On edge AB
		Point vertex(0.0f, 0.0f);    // Vertex A
		
		std::cout << "The point is " 
				  << (bsp(a, b, c, inside) ? "inside" : "outside") << "the triangle\n";
		std::cout << "The point is " 
				  << (bsp(a, b, c, outside) ? "inside" : "outside") << "the triangle\n";
		std::cout << "The point is " 
				  << (bsp(a, b, c, edge) ? "inside" : "outside") << "the triangle\n";
		std::cout << "The point is " 
				  << (bsp(a, b, c, vertex) ? "inside" : "outside") << "the triangle\n";
		
		return 0;
}