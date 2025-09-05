/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:39:15 by osabir            #+#    #+#             */
/*   Updated: 2024/08/08 06:19:31 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &P);
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &P);
        ~PresidentialPardonForm();
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif