/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:28:00 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/06 16:00:37 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//*********************** Constructor and destructor ***********************

PhoneBook::PhoneBook(void)
{
    this->_userInput = 0;
    this->_nbContacts = 0;
}

PhoneBook::~PhoneBook(void) {}

//*********************** Private methods ***********************

void    PhoneBook::rotateContacts()
{
    if (this->_nbContacts == 8)
    {
        for (int i = 0; i < 7; i++)
        {
            this->_contacts[i] = this->_contacts[i + 1];
            this->_contacts[i].setIndex(i);
        }
    }
}

//*********************** Public Methods ***********************

void    PhoneBook::addContact(void)
{
    if (this->_nbContacts == 8)
    {
        this->rotateContacts();
    }
    this->_nbContacts = std::min(this->_nbContacts + 1, 8);

    std::string input;
    this->_contacts[this->_nbContacts - 1].setIndex(this->_nbContacts - 1);

    std::cout << "First name: ";
    std::getline(std::cin, input);
    this->_contacts[this->_nbContacts - 1].setFirstName(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    this->_contacts[this->_nbContacts - 1].setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    this->_contacts[this->_nbContacts - 1].setNickname(input);

    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    this->_contacts[this->_nbContacts - 1].setPhoneNumber(input);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    this->_contacts[this->_nbContacts - 1].setDarkestSecret(input);
}

void    PhoneBook::searchContact(void) const
{
    std::string input;

    if (this->_nbContacts == 0)
    {
        std::cout << "No contact to search for." << std::endl;
        return ;
    }

    this->printContacts();

    std::cout << "Index: ";
    std::getline(std::cin, input);

    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index." << std::endl;
        return ;
    }

    int index = input[0] - '0';

    if (index >= this->_nbContacts)
    {
        std::cout << "No contact with this index." << std::endl;
        return ;
    }

    this->_contacts[index].display();
}

void    PhoneBook::printContacts(void) const
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First name" << "|";
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|";
    std::cout << std::setw(10) << "PhoneNbr" << "|";
    std::cout << std::setw(10) << "DarkSecret" << std::endl;

    for (int i = 0; i < this->_nbContacts; i++)
    {
        std::cout << std::setw(10) << this->_contacts[i].getIndex() << "|";
        std::cout << std::setw(10) << this->_contacts[i].getFirstName() << "|";
        std::cout << std::setw(10) << this->_contacts[i].getLastName() << "|";
        std::cout << std::setw(10) << this->_contacts[i].getNickname() << "|";
        std::cout << std::setw(10) << this->_contacts[i].getPhoneNumber() << "|";
        std::cout << std::setw(10) << this->_contacts[i].getDarkestSecret() << std::endl;
    }
}

void    PhoneBook::welcome(void) const
{
    std::cout << "Welcome to your phone book." << std::endl;
    std::cout << "Please enter a command." << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
}





