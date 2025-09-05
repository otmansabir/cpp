/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:16:55 by osabir            #+#    #+#             */
/*   Updated: 2024/08/06 02:33:30 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   Name;
        bool                boolSign;
        const int           gradeToSign;
        const int           gradeToExecute;
    public:
        Form();
        Form(const std::string name, int toSign, int toExecute);
        Form(const Form &F);
        Form &operator=(const Form &F);
        ~Form();
        std::string getName() const;
        int getTOSign() const;
        int getToExecute() const;
        void beSigned(Bureaucrat &B);
        // std::string getBoolSign() const;
        bool getBoolSign() const;
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

std::ostream &operator<<(std::ostream &out, const Form &F);

#endif