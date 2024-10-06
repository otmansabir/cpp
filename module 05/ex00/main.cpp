/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:11:32 by osabir            #+#    #+#             */
/*   Updated: 2024/09/15 09:19:08 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat B("bure", 1);
		Bureaucrat l("bddddure", 1);

		Bureaucrat c = B;
		Bureaucrat d (c);
		std::cout << c << std::endl;
		std::cout << B << std::endl;
		B.incrementGrade();
		B.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "error : "<< e.what() << std::endl;
	}
	
	return 0;
}