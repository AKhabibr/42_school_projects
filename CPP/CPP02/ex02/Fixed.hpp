/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:07:34 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/25 16:57:18 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
    	int value;
    	static const int fract_bits = 8;

	public:
    	Fixed();
    	Fixed(const Fixed &previous);
		Fixed( const int value );
    	Fixed( const float value );
    	~Fixed();
    	Fixed& operator= (const Fixed& previous);
		
    	int getRawBits( void ) const;
    	void setRawBits( int const raw );
		
		int toInt( void ) const;
   		float toFloat( void ) const;
		
		
		bool operator> (const Fixed& fixed) const;
    	bool operator< (const Fixed& fixed) const;
    	bool operator>= (const Fixed& fixed);
    	bool operator<= (const Fixed& fixed);
    	bool operator== (const Fixed& fixed);
    	bool operator!= (const Fixed& fixed);
    	Fixed operator+ (const Fixed& fixed);
    	Fixed operator- (const Fixed& fixed);
    	Fixed operator* (const Fixed& fixed);
    	Fixed operator/ (const Fixed& fixed);
    	Fixed operator++ (int);
    	Fixed operator++ (void);
    	Fixed operator-- (int);
    	Fixed operator-- (void);

    	static Fixed& max(Fixed& fixed1, Fixed& fixed2);
    	static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
    	static Fixed& min(Fixed& fixed1, Fixed& fixed2);
    	static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed_nbr);

#endif