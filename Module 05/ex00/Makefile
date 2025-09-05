# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 11:48:14 by osabir            #+#    #+#              #
#    Updated: 2024/03/01 11:48:29 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			= main.cpp Bureaucrat.cpp

OBJ			= $(SRC:.cpp=.o)

NAME		= Bureaucrat

HEADER		= Bureaucrat.hpp

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