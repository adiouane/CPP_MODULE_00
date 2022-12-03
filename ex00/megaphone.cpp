/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 03:03:39 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/02 23:10:43 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>


int main(int ac, char **av)
{
    int i = 1;
    int j;
    
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            std::cout << (char)toupper(av[i][j]); //we typecast to char because toupper returns an int in the ascii table
            j++;
        }
        i++;
    }
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}
