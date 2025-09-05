# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osabir <osabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 19:23:25 by osabir            #+#    #+#              #
#    Updated: 2024/03/03 10:29:21 by osabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= c++

FLAGS		= -std=c++98 -Wall -Werror -Wextra

SRC			= main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp ShrubberyCreationForm.cpp \
				Intern.cpp

OBJ			= $(SRC:.cpp=.o)

NAME		= ex03

HEADER		= Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp \
				RobotomyRequestForm.hpp ShrubberyCreationForm.hpp \
				Intern.hpp

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