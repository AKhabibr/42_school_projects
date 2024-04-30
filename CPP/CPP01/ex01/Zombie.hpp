/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:41:59 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/15 16:08:12 by akhabibr         ###   ########.fr       */
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
    	Zombie();
    	~Zombie();
    
	void announce( void );
	void setName( std::string _name );
};

Zombie *zombieHorde(int N, std::string _name);

#endif