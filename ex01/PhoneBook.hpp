/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:27:18 by svanmarc          #+#    #+#             */
/*   Updated: 2024/01/19 16:43:09 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int     _userInput;
        int     _nbContacts;

        void    rotateContacts();

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void    addContact(void);
        void    searchContact(void) const;
        void    printContacts(void) const;
        void    welcome(void) const;
};

#endif