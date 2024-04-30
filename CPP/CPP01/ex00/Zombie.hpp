/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:14:59 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/15 14:12:51 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
    	std::string name;
	public:
    	Zombie(std::string _name);
    	~Zombie();
    
	void announce( void );
};

Zombie* newZombie( std::string _name );
void randomChump( std::string _name );

#endif