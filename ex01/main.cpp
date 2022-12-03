/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 03:24:45 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/03 21:06:17 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// CONSTRACTOR

// shearch why we can use constructor and why not 
Phonebook::Phonebook()
{
    this->index = 0;
    this->full = 0;
}

Phonebook::~Phonebook()
{
}


Contact::Contact(){
}

Contact::~Contact()
{
}

// SETTERS

/*
    using seter function to set the value of the private variables
*/

void    Contact::set_first_name(std::string f){
    first_name = f;
}

void    Contact::set_last_name(std::string l){
    last_name = l;
}

void    Contact::set_nickname(std::string n){
    nickname = n;
}

void    Contact::set_phone_number(std::string p){
    phone_number = p;
}

void    Contact::set_darkest_secret(std::string d){
    darkest_secret = d;
}

// GETTER

/*
    using geter function to get the private data of the class 
*/

std::string Contact::get_darkest_secret() {
    return darkest_secret;
}
std::string Contact::get_phone_number() {
    return phone_number;
}
std::string Contact::get_nickname() {
    return nickname;
}
std::string Contact::get_last_name() {
    return last_name;
}
std::string Contact::get_first_name() {
    return first_name;
}

// ADD CONTACTS TO PHONEBOOK

int main(int ac, char **av)
{
    Phonebook phonebook;

    (void)av;
    if (ac != 1)
    {
        std::cout << "Invalid argument" << std::endl;
        std::cout << "USAGE: ./PhoneBook" << std::endl;
        exit(1);
    }
    std::cout << "\033[0;34mEnter a command: ADD - SEARCH - EXIT" << std::endl;;
    while(1)
    {
        std::string command;
        std::getline(std::cin, command);
        if (command.compare("") == 0)
            std::cout << "\033[0;32mEnter a command: ADD - SEARCH - EXIT" << std::endl;;
        if (std::cin.eof())
            break;
        if (command.compare("ADD") == 0)
            phonebook.add_contact();
        else if (command.compare("SEARCH") == 0)
            phonebook.search_contact();
        else if (command.compare("EXIT") == 0)
            return (0);
        else if (command.compare("") == 0)
            continue ;
        else
            std::cout << "\033[0;30mInvalid command" << std::endl;
    }
    return(0);
}
