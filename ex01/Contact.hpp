/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:04:53 by svanmarc          #+#    #+#             */
/*   Updated: 2024/01/19 12:39:51 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
        int         _index;

        std::string _truncate(std::string str) const;

    public:
        Contact(void);
        ~Contact(void);

        void        setFirstName(const std::string& firstName);
        void        setLastName(const std::string& lastName);
        void        setNickname(const std::string& nickname);
        void        setPhoneNumber(const std::string& phoneNumber);
        void        setDarkestSecret(const std::string& darkestSecret);
        void        setIndex(int index);

        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickname(void) const;
        std::string getPhoneNumber(void) const;
        std::string getDarkestSecret(void) const;
        int         getIndex(void) const;

        void        displayHeader(void) const;
        void        display(void) const;
};

#endif