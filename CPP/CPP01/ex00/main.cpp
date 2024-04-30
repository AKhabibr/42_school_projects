/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:14:31 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/15 14:53:09 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombieMark("Mark");
    zombieMark.announce();

    Zombie *zombieJack = newZombie("Jack");
    zombieJack->announce();
	delete zombieJack;

    randomChump("Bob");

    return 0;
}
