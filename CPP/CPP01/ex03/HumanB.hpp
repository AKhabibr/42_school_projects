/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:55:13 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/17 14:36:38 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
    	std::string name;
    	Weapon *weapon;
	public:
    	HumanB(std::string name);
    	~HumanB();
    	void setWeapon(Weapon& _weapon);
    	void attack();
};

#endif
