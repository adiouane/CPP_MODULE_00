/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SearchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:26:44 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/03 21:05:46 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
/*
    using this method function will search the contact to the phonebook
*/
// std::setw is used to set the width of the output
void    Phonebook::search_contact()
{
    /*
        printing contacts
    */
    std::cout << "|" << std::setw(10) << "index" << std::setw(10) << "|" << " first name" << std::setw(10) << "|" << " last name " << std::setw(10) << "|" << " nickname " << std::setw(11) << "|" << std::endl;
    if (this->full == 1){
        for (int i = 0; i < 8; i++)
        {
            std::cout << "|" << std::setw(10) <<  i << std::setw(10) << "|";
            std::cout << " " << std::setw(10) << contacts[i].get_first_name() << std::setw(10) << "|";
            std::cout << " " << std::setw(10) << contacts[i].get_last_name() << std::setw(10) <<  "|";
            std::cout << " " << std::setw(10) << contacts[i].get_nickname() << std::setw(10) << "|" << std::endl;
        }
    }
    else
    {
        for (int i = 0; i < this->index; i++)
        {
            std::cout << "|" << std::setw(10) <<  i << std::setw(10) << "|";
            std::cout << " " << std::setw(10) << contacts[i].get_first_name() << std::setw(10) << "|";
            std::cout << " " << std::setw(10) << contacts[i].get_last_name() << std::setw(10) <<  "|";
            std::cout << " " << std::setw(10) << contacts[i].get_nickname() << std::setw(10) << "|" << std::endl;
        }
    }
        
    /*
        printing contacts user intered
    */
   
    std::cout << "Enter index: ";
    std::string input;
    std::cin >> input;
    int i;
    int remainder;
    i = input[0] - '0';
    remainder = i;  // save index in remainder
    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
    {
        if (this->index == 0 && this->full == 0)
        {
            std::cout << "Phonebook is empty" << std::endl;
            return ;
        }
        else if (this->index > remainder || this->full == 1) // check if index bigger then remainder don't print in this case will be equal
        {
            std::cout << "\033[0;37mfirst_name: " << contacts[i].get_first_name() << std::endl;
            std::cout << "last_name: " << contacts[i].get_last_name() << std::endl;
            std::cout << "nickname: " << contacts[i].get_nickname() << std::endl;
            std::cout << "phone_number: " << contacts[i].get_phone_number() << std::endl;
            std::cout << "darkest_secret: " << contacts[i].get_darkest_secret() << std::endl;
        }
        else
            std::cout << "\033[0;30mInvalid index" << std::endl;
    }
    else
        std::cout << "\033[0;30mInvalid index" << std::endl;
}
