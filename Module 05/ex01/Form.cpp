/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:16:57 by osabir            #+#    #+#             */
/*   Updated: 2024/09/10 12:00:19 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
: Name("defaultF"), boolSign(false), gradeToSign(10), gradeToExecute(10)
{
}
Form::Form(const std::string name, int toSign, int toExecute)
: Name(name), boolSign(false), gradeToSign(toSign), gradeToExecute(toExecute)
{
}


Form &Form::operator=(const Form &F)
{
    if (this != &F)
        this->boolSign = F.boolSign;
    return *this;
}

Form::Form(const Form &F) : Name(F.Name), boolSign(F.boolSign) , gradeToSign(F.gradeToSign), gradeToExecute(F.gradeToExecute)
{ 
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what () const throw ()
{
    return "Form: Grade Too High Exception";
}

const char* Form::GradeTooLooException::what () const throw ()
{
    return "Form: Grade Too Loo Exception";
}

std::string Form::getName() const
{
    return this->Name;
}

int Form::getTOSign() const
{
    return this->gradeToSign;
}

int Form::getToExecute() const
{
    return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat &B)
{
    if (B.getGrade() <= this->getTOSign())
        this->boolSign = true;
    else
        throw Form::GradeTooLooException();
}

bool Form::getBoolSign() const
{
    return this->boolSign;
}

std::ostream &operator<<(std::ostream &out, const Form &F)
{
    out << F.getName() 
    << ", Form , grade to sign is : " << F.getTOSign()
    << " and grade to execute is : " << F.getToExecute()
    << " check sign is : " << F.getBoolSign();
    return out;
}
