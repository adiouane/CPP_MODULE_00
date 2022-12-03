/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:45:00 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/03 17:03:48 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include <iomanip>
#include <string.h>

class Phonebook{
    private:
    // data members or private attribute8
        Contact contacts[8];
        int     index;
        int     full;
    public:
    // member function
        Phonebook();
        ~Phonebook();
        void search_contact();
        void add_contact();
};
#endif 