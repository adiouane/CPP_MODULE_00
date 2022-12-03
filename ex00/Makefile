# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 03:20:31 by adiouane          #+#    #+#              #
#    Updated: 2022/12/02 22:56:48 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

GCC := c++ -Werror -Wextra -Wall  -std=c++98  #-fsanitize=thread

SRC := megaphone.cpp

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all