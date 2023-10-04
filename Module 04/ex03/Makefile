# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 09:34:16 by osabir            #+#    #+#              #
#    Updated: 2023/10/04 05:31:24 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++

NAME		= poly

OBJ			= $(SRC:.cpp=.o)

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

HEADRS		= AMateria.hpp IMateriaSource.hpp ICharacter.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp
 
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