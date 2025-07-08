/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 12:28:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/08 12:59:07 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int number;
		static const int bits = 8;
	public:
		Fixed(void);  //default constructor
		Fixed(const Fixed& obj); //copy constructor
		Fixed& operator=(const Fixed& obj); // copy assignment operator
		~Fixed(); // destructor

		// member functions
		void setRawBits(int const raw);
		int getRawBits(void) const;
};