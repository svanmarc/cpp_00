/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:13:16 by svanmarc          #+#    #+#             */
/*   Updated: 2024/01/19 16:38:22 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

#include "PhoneBook.hpp"

#include <string>

int main() {
    PhoneBook phoneBook;
    std::string command;

    phoneBook.welcome();

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, command);

        if (command == "EXIT") {
            break;
        } else if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        } else {
            std::cout << "Unknown command. Available commands: ADD, SEARCH, EXIT" << std::endl;
        }
    }

    return 0;
}

