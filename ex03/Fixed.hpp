/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 12:28:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/08 18:41:01 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int number;
		static const int bits = 2;
	public:
		Fixed(void); // default constructor
		Fixed(const Fixed& obj); // copy constructor
		Fixed& operator=(const Fixed& obj); // copy assignment operator
		~Fixed(); // destructor


		Fixed(const int value); // int → fixed-point
		Fixed(const float value); // float → fixed-point

		// member functions
		void setRawBits(int const raw);
		int getRawBits(void) const;
		
		float toFloat( void ) const; // fixed point value → float point value
		int toInt( void ) const; // fixed point → int

		// 6 comparison operators
		bool operator>(Fixed const& obj) const;
		bool operator<(Fixed const& obj) const;
		bool operator>=(Fixed const& obj) const;
		bool operator<=(Fixed const& obj) const;
		bool operator==(Fixed const& obj) const;
		bool operator!=(Fixed const& obj) const;

		// arithmetic operators:
		Fixed operator+(Fixed const& obj) const;
		Fixed operator-(Fixed const& obj) const;
		Fixed operator*(Fixed const& obj);
		Fixed operator/(Fixed const& obj) const;

		// increment/decrement 
		Fixed& operator++(); // ++
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		// min/max
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream& output, const Fixed& obj);