/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:55:09 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/17 14:26:00 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& _weapon)
{
    weapon = &_weapon;
}

void HumanB::attack()
{
    if (weapon != nullptr)
	{
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
	else
	{
        std::cout << name << " attacks without weapon " << std::endl;
    }
}