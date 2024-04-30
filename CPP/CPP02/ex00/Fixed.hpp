/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:07:34 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/22 14:11:27 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
    	int value;
    	static const int fract_bits = 8;

	public:
    	Fixed();
    	Fixed(const Fixed &previous);
    	~Fixed();
    	Fixed& operator = (const Fixed& previous);
    	int getRawBits( void ) const;
    	void setRawBits( int const raw );
};

#endif