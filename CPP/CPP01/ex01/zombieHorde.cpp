/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:42:44 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/15 16:46:31 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string _name)
{
    std::string zombie_name;
    
    if (N <= 0)
        return NULL;
    Zombie *Horde = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        zombie_name = _name + std::to_string(i);
        Horde[i].setName(zombie_name);
        i++;
    }
    return Horde;
}
