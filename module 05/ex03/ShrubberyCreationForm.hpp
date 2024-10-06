/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:59:52 by osabir            #+#    #+#             */
/*   Updated: 2024/08/08 06:11:30 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &S);
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &S);
        ~ShrubberyCreationForm();
        
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};


#endif