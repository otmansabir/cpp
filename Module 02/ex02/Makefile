# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 18:33:19 by osabir            #+#    #+#              #
#    Updated: 2023/09/21 18:35:22 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			= main.cpp Fixed.cpp 

OBJ			= $(SRC:.cpp=.o)

NAME		= Fixed

all			: $(NAME)

$(NAME)		: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o			: %.cpp Fixed.hpp 
	$(CC) $(FLAGS) -c $< -o $@

clean		:
	rm -rf $(OBJ)

fclean		: clean
	rm -rf $(NAME)

re			: fclean all