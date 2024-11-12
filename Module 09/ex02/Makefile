# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAkefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/10 11:34:22 by osabir            #+#    #+#              #
#    Updated: 2024/08/10 11:35:34 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++ 

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			=  main.cpp PmergeMe.cpp

OBJ			= $(SRC:.cpp=.o)

NAME		= PmergeMe

HEADER		= PmergeMe.hpp

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