/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:31:23 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/18 17:56:42 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
    	void debug( void) ;
    	void info( void );
    	void warning( void );
    	void error( void );

	public:
    	Harl();
    	~Harl();
		void complain(std::string level);
   
};

#endif