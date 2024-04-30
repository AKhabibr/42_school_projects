/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:33:47 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/13 13:15:42 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {

    std::string     firstName;
    std::string     lastName;
    std::string     nickName;
    std::string     phoneNumber;
    std::string     secret;

public:
    Contact();
    Contact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _phoneNumber, std::string _secret);
    ~Contact();

    void setFirstName(std::string _firstName);
    void setLastName(std::string _lastName);
    void setNickName(std::string _nickName);
    void setPhoneNumber(std::string _phoneNumber);
    void setSecret(std::string _secret);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getSecret() const;
};

#endif