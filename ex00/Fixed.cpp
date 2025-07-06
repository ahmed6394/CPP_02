/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:22:17 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/06 14:58:15 by gahmed           ###   ########.fr       */
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
	std::cout << "getRawBits member function called\n";
	return number;
}

