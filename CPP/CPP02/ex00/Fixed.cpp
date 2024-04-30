/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:07:23 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/22 14:13:35 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& previous)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = previous;
}

Fixed& Fixed::operator=(const Fixed& previous)
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

int Fixed::getRawBits( void)  const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}