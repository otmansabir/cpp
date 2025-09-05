/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:11:32 by osabir            #+#    #+#             */
/*   Updated: 2024/09/10 12:00:10 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cassert>
#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat B("bure", 150);
		Form F("F", 21, 23);
		B.signForm(F);
		F.beSigned(B);
		B.signForm(F);
	
		std::cout << F << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error : "<< e.what() << std::endl;
	}
	
	return 0;
}