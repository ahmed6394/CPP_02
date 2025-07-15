/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:22:17 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/15 15:30:12 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number(0) 
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& obj)
{
	// std::cout << "Copy constructor called\n";
	number = obj.number;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	// std::cout << "Copy assignment operator called\n";
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
	// std::cout << "Int constructor called\n";
}
Fixed::Fixed(const float value)
{
	number = roundf(value * (1 << bits));
	// std::cout << "Float constructor called\n";
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

bool Fixed::operator>(Fixed const& obj) const
{
	return (number > obj.number);
}

bool Fixed::operator<(Fixed const& obj) const
{
	return (number < obj.number);
}

bool Fixed::operator>=(Fixed const& obj) const
{
	return (number >= obj.number);
}

bool Fixed::operator<=(Fixed const& obj) const
{
	return (number <= obj.number);
}

bool Fixed::operator==(Fixed const& obj) const
{
	return (number == obj.number);
}

bool Fixed::operator!=(Fixed const& obj) const
{
	return (number != obj.number);
}

// arithmetic operators:
Fixed Fixed::operator+(Fixed const& obj) const
{
	Fixed res;
	res.number = number + obj.number;
	return res;
}

Fixed Fixed::operator-(Fixed const& obj) const
{
	Fixed res;
	res.number = number - obj.number;
	return res;
}

Fixed Fixed::operator*(Fixed const& obj)
{
	Fixed res;
	res.number = (number * obj.number)/(1 << bits);
	return res;
}

Fixed Fixed::operator/(Fixed const& obj) const
{
	Fixed res;
	res.number = (number << bits) / obj.number;
	return res;
}

// increment/decrement 
Fixed& Fixed::operator++()
{
	++number;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed res(*this);
	++number;
	return res;
}

Fixed& Fixed::operator--()
{
	--number;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed res(*this);
	--number;
	return res;
}

// min/max
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a < b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a < b) ? b : a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a < b) ? b : a);
}