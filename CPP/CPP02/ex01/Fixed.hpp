/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:07:34 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/24 15:47:06 by akhabibr         ###   ########.fr       */
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
    	Fixed& operator=( const Fixed& previous );
		
    	int getRawBits( void ) const;
    	void setRawBits( int const raw );
		
		int toInt( void ) const;
   		float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed_nbr);

#endif