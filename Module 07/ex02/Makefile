# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 11:20:02 by osabir            #+#    #+#              #
#    Updated: 2024/03/07 11:20:24 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++ 

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			=  main.cpp

OBJ			= $(SRC:.cpp=.o)

NAME		= Array

HEADER		= Array.hpp

all			: $(NAME)

$(NAME)		: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o			: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean		:
	rm -rf $(OBJ)

fclean		: clean
	rm -rf $(NAME)

re			: fclean all