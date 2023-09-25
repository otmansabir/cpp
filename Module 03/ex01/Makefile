# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 12:55:21 by osabir            #+#    #+#              #
#    Updated: 2023/09/25 14:40:03 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ			= $(SRC:.cpp=.o)

NAME		= ScavTrap

all			: $(NAME)

$(NAME)		: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o			: %.cpp ClapTrap.cpp ScavTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean		:
	rm -rf $(OBJ)

fclean		: clean
	rm -rf $(NAME)

re			: fclean all