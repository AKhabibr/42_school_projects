/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:33:38 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/13 13:15:28 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main(void)
{
    int i_contact = 0;
    std::string input;
    PhoneBook phoneBook;

    while (1)
    {
        std::cout << "Welcome to the PhoneBook" << std::endl;
	    std::cout << "Commands: ADD, SEARCH, EXIT" << std::endl;
        
        std::getline(std::cin, input);
        if (std::cin.eof())
		{
			std::cerr << "\nError" << std::endl;
			break;
		}

        if (!input.compare("ADD"))
        {
            phoneBook.add(i_contact);
            i_contact++;
            if (std::cin.eof())
		    {
			    std::cerr << "\nError" << std::endl;
			    break;
		    }
        }
        else if (!input.compare("SEARCH"))
        {
            phoneBook.search(i_contact);
            std::getline(std::cin, input);
            if (std::cin.eof())
		    {
			    std::cerr << "\nError" << std::endl;
			    break;
		    }
        }
        else if (!input.compare("EXIT"))
            break;
    }

    std::cout << "You pressed EXIT." << std::endl;
    return 0;
}
