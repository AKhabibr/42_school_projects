/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:07:23 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/24 15:47:21 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& previous)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = previous;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << Fixed::fract_bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << Fixed::fract_bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& previous )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &previous)
	    this->value = previous.getRawBits();
    return *this;
}

void Fixed::setRawBits(const int raw)
{
    this->value = raw;
}

int Fixed::getRawBits( void )  const
{
    return this->value;
}

int Fixed::toInt() const
{
    return (value >> fract_bits);
}

float Fixed::toFloat() const
{
    return ((float) value / (1 << fract_bits));
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed_nbr)
{
    output << fixed_nbr.toFloat();
    return output;
}
