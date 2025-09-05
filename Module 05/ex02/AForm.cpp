/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:14:52 by osabir            #+#    #+#             */
/*   Updated: 2024/08/06 05:44:45 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
: Name("defaultA"), boolSign(false), gradeToSign(40), gradeToExecute(40)
{
}

AForm::AForm(std::string name, int toSign, int toExecute)
: Name(name), boolSign(false), gradeToSign(toSign), gradeToExecute(toExecute)
{
    
}

AForm::AForm(const AForm &F) : gradeToSign(F.gradeToSign), gradeToExecute(F.gradeToExecute)
{
}

AForm &AForm::operator=(const AForm &A)
{
    if (this != &A)
    {
        this->boolSign = A.boolSign;
    }
    return *this;
}

AForm::~AForm()
{
    
}

std::string AForm::getName() const
{
    return this->Name;
}

int AForm::getTOSign() const
{
    return this->gradeToSign;
}

int AForm::getToExecute() const
{
    return this->gradeToExecute;
}

void AForm::beSigned(Bureaucrat const &B)
{
    if (B.getGrade() <= this->getTOSign())
        this->boolSign = true;
    else
        throw AForm::GradeTooLooException();
}

void AForm::beSignedToForm(Bureaucrat const &B) const
{
    if (B.getGrade() > this->getTOSign())
        throw AForm::GradeTooLooException();
}

bool AForm::getBoolSign() const
{
    return boolSign;
}

const char* AForm::GradeTooHighException::what () const throw ()
{
    return "AForm: Grade Too High Exception";;
}

const char* AForm::GradeTooLooException::what () const throw ()
{
    return "AForm: Grade Too Loo Exception";;
}
