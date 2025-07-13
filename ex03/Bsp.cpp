/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:40:10 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/13 16:53:28 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float absp(float value)
{
	return float(value < 0 ? -value : value);
}

//Area(ABC) = {(bx-ax) * (cy-ay)} - {(by-ay) * (cx-ax)}
float area(const Point& a, const Point& b, const Point& c)
{
	float abx = (b.getX() - a.getX()).toFloat();
	float aby = (b.getY() - a.getY()).toFloat();
	float acx = (c.getX() - a.getX()).toFloat();
	float acy = (c.getY() - a.getY()).toFloat();
	return abx * acy - aby * acx;
}
// Area(ABC) >= Area(PAB) + Area(PBC) + Area(PCA)
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float area1 = absp(area(point, a, b));
	float area2 = absp(area(point, b, c));
	float area3 = absp(area(point, c, a));
	float area4 = absp(area(a, b, c));

	float totalArea = area1 + area2 + area3;
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	return (totalArea == area4);
}