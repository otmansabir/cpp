/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:58:21 by osabir            #+#    #+#             */
/*   Updated: 2024/08/06 05:42:11 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string Name;
        bool boolSign;
        const int                    gradeToSign;
        const int gradeToExecute;
    public:
        AForm();
        AForm(const std::string name, int toSign, int toExecute);
        AForm(const AForm &F);
        AForm &operator=(const AForm &F);
        virtual ~AForm();
        std::string getName() const;
        int getTOSign() const;
        int getToExecute() const;
        void beSigned(Bureaucrat const &B);
        void beSignedToForm(Bureaucrat const &B) const;
        bool getBoolSign() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what () const throw ();
        };
        class GradeTooLooException : public std::exception
        {
            public:
                const char* what () const throw ();
        };
};

#endif