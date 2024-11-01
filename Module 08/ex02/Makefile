# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 12:03:54 by osabir            #+#    #+#              #
#    Updated: 2024/03/09 12:04:37 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++ 

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			=  main.cpp 

OBJ			= $(SRC:.cpp=.o)

NAME		= MutantStack

HEADER		= MutantStack.hpp

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