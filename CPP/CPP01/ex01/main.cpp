/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:41:28 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/20 12:30:54 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i;
    int N = 5;
    Zombie *zombies;
    
    zombies = zombieHorde(N, "zombie_number_");
    if (!zombies)
    {
        std::cout << "No zombies were created." << std::endl;
        return 1;
    }
    i = 0;
    while (i < N)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
    return 0;
}
