/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 12:28:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/06 14:58:26 by gahmed           ###   ########.fr       */
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
		Fixed(void);
		Fixed(const Fixed& obj);
		~Fixed();
		Fixed& operator=(const Fixed& obj);

		void setRawBits(int const raw);
		int getRawBits(void) const;
};