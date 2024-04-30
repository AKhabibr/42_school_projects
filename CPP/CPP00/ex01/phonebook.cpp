/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:34:00 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/13 13:18:06 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

const int PhoneBook::SIZE = 8;

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}


std::string PhoneBook::receive_string()
{
    std::string input = "";

    while (input.empty())
        std::getline(std::cin, input);
    return input;
}

void PhoneBook::add(int i_contact)
{
    Contact contact;
    std::string input_;

    std::cout << "FirstName:\t ";
    contact.setFirstName(receive_string());
    
    std::cout << "LastName:\t ";
    contact.setLastName(receive_string());

    std::cout << "NickName:\t ";
    contact.setNickName(receive_string());

    std::cout << "PhoneNumber:\t ";
    contact.setPhoneNumber(receive_string());

    std::cout << "Secret:\t ";
    contact.setSecret(receive_string());

    this->contacts[i_contact % SIZE] = contact;
}

void PhoneBook::put_in_phonebook(std::string text, std::string separator)
{
    int i = 0;

    if (text.length() > 10)
    {
        while (i < (int)text.length())
        {
            if (i == 9)
            {
                std::cout << ".";
                break ;
            }
            std::cout << text[i];
            i++;
        }
    }
    else if (text.length() == 10)
    {
        while(text[i])
        {
            std::cout << text[i];
            i++;
        }
    }
    else
    {
        while(i < (int) (10 - text.length()))
        {
            std::cout << " ";
            i++;
        }
        i = 0;
        while(text[i])
        {
            std::cout << text[i];
            i++;
        }
    }
    std::cout << separator;
}

void PhoneBook::full_form(std::string text)
{
    int i = 0;

    while (text[i])
    {
        std::cout << text[i];
        i++;
    }
    std::cout << std::endl;
}

void PhoneBook::display_phonebook(int i_contact)
{
    std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    
    int i = 0;
    while (i < std::min(i_contact, this->SIZE))
    {
        std::cout << "|";
        put_in_phonebook(std::to_string(i), "|");
        put_in_phonebook(this->contacts[i].getFirstName(), "|");
        put_in_phonebook(this->contacts[i].getLastName(), "|");
        put_in_phonebook(this->contacts[i].getNickName(), "|");
        std::cout << std::endl;
        i++;
    }
}

void PhoneBook::search(int i_contact)
{
    int contact_number;

    display_phonebook(i_contact);

    std::cout << "Write index:  ";
    std::cin >> contact_number;

    if (contact_number < std::min(i_contact, this->SIZE))
    {
        std::cout << "first name:   ";
        full_form(this->contacts[contact_number].getFirstName());

        std::cout << "last name:   ";
        full_form(this->contacts[contact_number].getLastName());

        std::cout << "nickname:   ";
        full_form(this->contacts[contact_number].getNickName());

        std::cout << "phone number:   ";
        full_form(this->contacts[contact_number].getPhoneNumber());

        std::cout << "secret:   ";
        full_form(this->contacts[contact_number].getSecret());
    }
    else
        std::cout << "Wrong number!" << std::endl;
}