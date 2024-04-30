/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:33:44 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/13 13:05:09 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::Contact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _phoneNumber,
                 std::string _secret)
{
    firstName = _firstName;
    lastName = _lastName;
    nickName = _nickName;
    phoneNumber = _phoneNumber;
    secret = _secret;
} 

Contact::~Contact() {}

void Contact::setFirstName(std::string _firstName)
{
    firstName = _firstName;
}
std::string Contact::getFirstName(void) const
{
    return firstName;
}



void Contact::setLastName(std::string _lastName)
{
    lastName = _lastName;
}
std::string Contact::getLastName(void) const
{
    return lastName;
}



void Contact::setNickName(std::string _nickName)
{
    nickName = _nickName;
}
std::string Contact::getNickName(void) const
{
    return nickName;
}



void Contact::setPhoneNumber(std::string _phoneNumber)
{
    phoneNumber = _phoneNumber;
}
std::string Contact::getPhoneNumber(void) const
{
    return phoneNumber;
}



void Contact::setSecret(std::string _secret)
{
    secret = _secret;
}
std::string Contact::getSecret(void) const
{
    return secret;
}
