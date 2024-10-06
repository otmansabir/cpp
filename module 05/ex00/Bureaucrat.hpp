/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:12:07 by osabir            #+#    #+#             */
/*   Updated: 2024/09/29 10:15:51 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B);

#endif