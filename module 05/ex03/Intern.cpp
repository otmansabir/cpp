/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:55:11 by osabir            #+#    #+#             */
/*   Updated: 2024/08/06 22:41:34 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}


AForm *Intern::makeForm(std::string const &formName, std::string const &target) const
{
    std::string str[3] = {"shrubbery request", "robotomy request", "presidential request"};
    std::cout << formName << std::endl;
    int value = (str[0] == formName) ? 0 : (str[1] == formName) ? 1 : (str[2] == formName) ? 2 : -1;
    std::cout << "Intern creates " << formName << std::endl;
    switch (value)
    {
        case 0:
            std::cout << "Intern creates " << formName << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << formName << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << formName << std::endl;
            return new PresidentialPardonForm(target);
        case -1:
            std::cerr << "Error: Unknown form name." << std::endl;
            break ;
    }
    return NULL;
}
