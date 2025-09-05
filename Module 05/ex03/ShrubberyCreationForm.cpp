/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:10:02 by osabir            #+#    #+#             */
/*   Updated: 2024/09/15 10:58:38 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: AForm("Shrubbery Creation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &S)
: AForm("Shrubbery Creation", 145, 137), target(S.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &S)
{
    if (this != &S)
        this->target = S.getTarget();
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getBoolSign() || executor.getGrade() > this->getToExecute())
        throw AForm::GradeTooLooException();
    std::string filename = this->getTarget() + "_shrubbery";
    std::ofstream outFile(filename.c_str());
    if (!outFile.is_open())
    {
        std::cerr << "Failed to create file: " << filename << std::endl;
        return ;
    }
    
    outFile << "     *" << std::endl;
    outFile << "    ***" << std::endl;
    outFile << "   *****" << std::endl;
    outFile << "  *******" << std::endl;
    outFile << " *********" << std::endl;
    outFile << "***********" << std::endl;
    outFile << "    | |   " << std::endl;
    outFile << "    | |   " << std::endl;

    outFile.close();
    
    std::cout << "File \""
    << filename << "\" has been created with ASCII trees."
    << std::endl;
    
}