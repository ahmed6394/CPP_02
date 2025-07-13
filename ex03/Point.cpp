/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:31:20 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/13 16:44:57 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>


//default constructor
Point::Point() : x(0), y(0) {}
//copy constructor
Point::Point(const Point& obj) : x(obj.x), y(obj.y){}
//assgn operator
Point& Point::operator=(const Point& obj)
{
	(void)obj;
	return *this;
}

//parameterized constructor
Point::Point(const float a, const float b):x(a), y(b){}

//destructor
Point::~Point(){}

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY() const
{
	return y;
}







