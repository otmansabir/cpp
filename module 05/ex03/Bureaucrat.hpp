/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:35:29 by osabir            #+#    #+#             */
/*   Updated: 2024/08/06 04:14:35 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
		const std::string	Name;
		int					Grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &B);
		Bureaucrat &operator=(const Bureaucrat &B);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void decrementGrade();
		void incrementGrade();
		void howToCheckValidGrade(int grade, bool conferme);
		void signForm(const AForm &F);
		void executeForm(AForm const & form);
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