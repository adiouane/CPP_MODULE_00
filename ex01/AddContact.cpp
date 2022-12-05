/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:23:19 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/05 17:20:21 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
    using this method function will add the contact to the phonebook
*/

void    Phonebook::add_contact()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "\033[0;31mfirst_name: ";
    std::cin >> first_name;
    if (first_name.length() > 10)
        first_name = first_name.substr(0, 9) + ".";
    std::cout << "\033[0;32mlast_name: ";
    std::cin >> last_name;
    if (last_name.length() > 10)
        last_name = last_name.substr(0, 9) + ".";
    std::cout << "\033[0;33mnickname: ";
    std::cin >> nickname;
    if (nickname.length() > 10)
        nickname = nickname.substr(0, 9) + ".";
    std::cout << "\033[0;35mphone_number: ";
    std::cin >> phone_number;
    if (phone_number.length() > 10)
        phone_number = phone_number.substr(0, 9) + ".";
    std::cout << "\033[0;36mdarkest_secret: ";
    std::cin >> darkest_secret;
    if (darkest_secret.length() > 10)
        darkest_secret = darkest_secret.substr(0, 9) + ".";
    if (this->index == 8)
    {
        this->index = 0;
        this->full = 1;
    }else{
        contacts[this->index].set_first_name(first_name);
        contacts[this->index].set_last_name(last_name);
        contacts[this->index].set_nickname(nickname);
        contacts[this->index].set_phone_number(phone_number);
        contacts[this->index].set_darkest_secret(darkest_secret);
        this->index++;
    }
    if (this->full == 1)
      this->index = 0;

}
