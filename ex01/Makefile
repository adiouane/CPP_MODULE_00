# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 03:22:11 by adiouane          #+#    #+#              #
#    Updated: 2022/12/02 22:54:43 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := PhoneBook

SRC := main.cpp AddContact.cpp SearchContact.cpp\

GCC := c++ -Werror -Wextra -Wall  -std=c++98  #-fsanitize=thread

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all