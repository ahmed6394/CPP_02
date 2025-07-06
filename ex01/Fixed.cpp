/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:22:17 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/06 16:29:51 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : number(0) 
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed::~Fixed ()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
		number = obj.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::getRawBits(void) const
{
	return number;
}


Fixed::Fixed(const int value)
{
	number = value << bits;
	std::cout << "Int constructor called\n";
}
Fixed::Fixed(const float value)
{
	number = roundf(value * (1 << bits));
	std::cout << "Float constructor called\n";
}

float Fixed::toFloat( void ) const
{
	return ((float)number / (1 << bits));
}

int Fixed::toInt( void ) const
{
	return (number >> bits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj)
{
	output << obj.toFloat();
	return(output);
}