/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:35:12 by osabir            #+#    #+#             */
/*   Updated: 2024/08/08 07:14:28 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Default")
{
    this->howToCheckValidGrade(10, true);
}

Bureaucrat::Bureaucrat(const Bureaucrat &B) : Name(B.Name), Grade(B.Grade)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : Name(name)
{
    this->howToCheckValidGrade(grade, true);
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &B)
{
    if (this != &B)
        this->Grade = B.Grade;
        static_cast<std::string >(this->Name) = B.Name;
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

void Bureaucrat::signForm(const AForm &F)
{
    if (F.getBoolSign())
    {
        std::cout << this->getName()
        << " signed " << F.getBoolSign()
        << std::endl;
    }
    else
    {
        std::cerr << this->getName()
        << " couldn't sign "
        << F.getName() << " because "
        << "grid to low" << std::endl;
    }
}

// void Bureaucrat::signForm(AForm const &F)
// {
//     try
//     {
//         F.beSignedToForm(*this);
//         std::cout << this->getName()
//         << " signed " << F.getBoolSign()
//         << std::endl;
//     }
//     catch (const std::exception& e)
//     {
//         std::cerr << this->getName()
//         << " couldn't sign "
//         << F.getName() << " because "
//         << e.what() << std::endl;
//     }
// }

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName()
        << " executed "
        << form.getName()
        << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName()
        << " could not execute "
        << e.what() << std::endl;
    }
    
}
