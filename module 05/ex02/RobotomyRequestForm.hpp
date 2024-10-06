/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:54:54 by osabir            #+#    #+#             */
/*   Updated: 2024/08/08 06:18:26 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &R);
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &R);
        ~RobotomyRequestForm();
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif