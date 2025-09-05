/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:44:27 by osabir            #+#    #+#             */
/*   Updated: 2024/09/15 10:58:17 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
: AForm("Presidential Creation", 25, 5), target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &P)
: AForm("Presidential Creation", 25, 5), target(P.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &P)
{
    if (this != &P)
        this->target = P.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getBoolSign() || executor.getGrade() > this->getToExecute())
        throw AForm::GradeTooLooException();
    std::cout << this->getTarget()
    << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}