# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 14:39:02 by osabir            #+#    #+#              #
#    Updated: 2023/09/25 14:39:50 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			= main.cpp ClapTrap.cpp FragTrap.cpp

OBJ			= $(SRC:.cpp=.o)

NAME		= FragTrap

all			: $(NAME)

$(NAME)		: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o			: %.cpp ClapTrap.cpp FragTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean		:
	rm -rf $(OBJ)

fclean		: clean
	rm -rf $(NAME)

re			: fclean all