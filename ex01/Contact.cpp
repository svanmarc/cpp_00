/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:37:51 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/06 15:55:46 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//*********************** Constructor and destructor ***********************

Contact::Contact(void) {}

Contact::~Contact(void) {}

//*********************** Setters ***********************

void        Contact::setFirstName(const std::string& firstName)
{
    this->_firstName = firstName;
}

void        Contact::setLastName(const std::string& lastName)
{
    this->_lastName = lastName;
}

void        Contact::setNickname(const std::string& nickname)
{
    this->_nickname = nickname;
}

void        Contact::setPhoneNumber(const std::string& phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void        Contact::setDarkestSecret(const std::string& darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}

void        Contact::setIndex(int index)
{
    this->_index = index;
}

//*********************** Getters ***********************

std::string Contact::getFirstName(void) const
{
    return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
    return (this->_lastName);
}

std::string Contact::getNickname(void) const
{
    return (this->_nickname);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
    return (this->_darkestSecret);
}

int         Contact::getIndex(void) const
{
    return (this->_index);
}

//*********************** Private methods ***********************

std::string Contact::_truncate(std::string str) const
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

//*********************** Public methods ***********************

void        Contact::displayHeader(void) const
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First name" << "|";
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|";
    std::cout << std::setw(10) << "PhoneNbr" << "|";
    std::cout << std::setw(10) << "DarkSecret" << std::endl;
}

void        Contact::display(void) const
{
    std::cout << std::setw(10) << this->_index << "|";
    std::cout << std::setw(10) << this->_truncate(this->_firstName) << "|";
    std::cout << std::setw(10) << this->_truncate(this->_lastName) << "|";
    std::cout << std::setw(10) << this->_truncate(this->_nickname) << "|";
    std::cout << std::setw(10) << this->_truncate(this->_phoneNumber) << "|";
    std::cout << std::setw(10) << this->_truncate(this->_darkestSecret) << std::endl;
}