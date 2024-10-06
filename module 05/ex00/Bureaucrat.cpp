/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:01:36 by osabir            #+#    #+#             */
/*   Updated: 2024/09/29 10:15:46 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Default")
{
    this->howToCheckValidGrade(10, true);
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : Name(name)
{
    this->howToCheckValidGrade(grade, true);
}

Bureaucrat::Bureaucrat(const Bureaucrat &B) : Name(B.Name) , Grade(B.Grade)
{

}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &B)
{
    if (this != &B)
    {
        this->Grade = B.Grade;
        static_cast<std::string >(this->Name) = B.Name;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return this->Name;
}

int Bureaucrat::getGrade() const
{
    return this->Grade;
}

void Bureaucrat::incrementGrade()
{
    this->Grade--;
    this->howToCheckValidGrade(this->Grade, false);
}

void Bureaucrat::decrementGrade()
{
    this->Grade++;
    this->howToCheckValidGrade(this->Grade, false);
}

void    Bureaucrat::howToCheckValidGrade(int grade, bool conferme)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLooException();
    else if (conferme)
        this->Grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what () const throw ()
{
    return "Grade Too High Exception";
}

const char* Bureaucrat::GradeTooLooException::what () const throw ()
{
    return "Grade Too Loo Exception";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B)
{
    out << B.getName()
    << ", bureaucrat grade "
    << B.getGrade()
    << ".";
    return out;
}
