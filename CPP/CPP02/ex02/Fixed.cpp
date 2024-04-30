/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:07:23 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/25 17:27:49 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const Fixed& previous)
{
    *this = previous;
}

Fixed::Fixed(const int value)
{
    this->value = value << Fixed::fract_bits;
}

Fixed::Fixed(const float value)
{
    this->value = roundf(value * (1 << Fixed::fract_bits));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& previous)
{
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




bool Fixed::operator>(const Fixed& fixed) const
{
    return (this->value > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const
{
    return (this->value < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed)
{
    return (this->value >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed)
{
    return (this->value <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed)
{
    return (this->value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed& fixed)
{
    return (this->value != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed)
{
    Fixed out(this->toFloat() + fixed.toFloat());
    return out;
}

Fixed Fixed::operator-(const Fixed& fixed)
{
    Fixed out(this->toFloat() - fixed.toFloat());
    return out;
}

Fixed Fixed::operator*(const Fixed& fixed)
{
    Fixed out(this->toFloat() * fixed.toFloat());
    return out;
}

Fixed Fixed::operator/(const Fixed& fixed)
{
    Fixed out(this->toFloat() / fixed.toFloat());
    return out;
}

Fixed Fixed::operator++(void)
{
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed out(*this);
    this->operator++();
    return out;
}

Fixed Fixed::operator--(void)
{
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed out(*this);
    this->operator--();
    return out;
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
    if (fixed1 > fixed2)
    {
        return fixed1;
    }
    return fixed2;
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
    if (fixed1 > fixed2)
    {
        return fixed1;
    }
    return fixed2;
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
    if (fixed1 < fixed2)
    {
        return fixed1;
    }
    return fixed2;
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
    if (fixed1 < fixed2)
    {
        return fixed1;
    }
    return fixed2;
}