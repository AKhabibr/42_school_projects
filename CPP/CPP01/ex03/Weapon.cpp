/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:27:36 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/17 14:36:20 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

Weapon::~Weapon() {}

void Weapon::setType(std::string _type)
{
    type = _type;
}

const std::string& Weapon::getType()
{
    return type;
}
