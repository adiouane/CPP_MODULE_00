/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:52:00 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/05 18:37:32 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Contact_HPP
# define Contact_HPP

# include <iostream>


class Contact{
    private:
    /*data members
    or called Private attribute9 */
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        
    public:
        // setter method
        Contact();
        ~Contact();
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string nickname);
        void set_phone_number(std::string phone_number);
        void set_darkest_secret(std::string darkest_secret);
        //getter method
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_darkest_secret();
};

#endif