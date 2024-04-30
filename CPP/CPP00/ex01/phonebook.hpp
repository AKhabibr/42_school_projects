/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:34:03 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/13 13:05:29 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    std::string receive_string();
    void display_phonebook(int current);
    void put_in_phonebook(std::string message, std::string separator);
    void full_form(std::string message);
    const static int SIZE;

public:
    PhoneBook();
    ~PhoneBook();

   void add(int current);
   void search(int current);
};

#endif