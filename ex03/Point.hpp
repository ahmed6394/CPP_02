/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:10:42 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/13 16:47:52 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		// canonical form
		Point();
		Point(const Point& obj);
		Point& operator=(const Point& obj);
		~Point();
		Point(const float a, const float b);
		// getter
		Fixed getX() const;
		Fixed getY() const;
};



