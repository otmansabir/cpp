/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:58:37 by osabir            #+#    #+#             */
/*   Updated: 2024/09/15 10:58:28 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: AForm("Robotomy Creation", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &P)
: AForm("Robotomy Creation", 72, 45), target(P.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &P)
{
    if (this != &P)
        this->target = P.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->target; 
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::srand(std::time(NULL));
    if (!this->getBoolSign() || executor.getGrade() > this->getToExecute())
        throw AForm::GradeTooLooException();
    std::cout << "Make some drilling noises !" << std::endl;
    bool what = (std::rand() % 2 == 0);
    if (what)
        std::cout << this->getTarget()
        << " has been robotomized successfully 50% of the time."
        << std::endl;
    else
        std::cout << "The robotomy failed." << std::endl;
    
}