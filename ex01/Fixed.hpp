/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 12:28:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/06 16:29:44 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int number;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& obj);
		~Fixed();
		Fixed& operator=(const Fixed& obj);

		Fixed(const int value);
		Fixed(const float value);

		void setRawBits(int const raw);
		int getRawBits(void) const;
		
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &obj);