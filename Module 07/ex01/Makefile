# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 19:37:23 by osabir            #+#    #+#              #
#    Updated: 2024/03/06 19:37:50 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++ 

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			=  main.cpp

OBJ			= $(SRC:.cpp=.o)

NAME		= iter

HEADER		= iter.hpp

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