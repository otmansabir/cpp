# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 16:44:37 by osabir            #+#    #+#              #
#    Updated: 2023/10/02 14:08:28 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++

NAME		= poly

OBJ			= $(SRC:.cpp=.o)

FLAGS		= -std=c++98 -Wall -Werror -Wextra

HEADRS		= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

SRC			= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

all			: $(NAME)

$(NAME)		: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o			: %.cpp $(HEADRS)
	$(CC) $(FLAGS) -c $< -o $@

clean		:
	rm -rf $(OBJ)

fclean		: clean
	rm -rf $(NAME)

re			: fclean all