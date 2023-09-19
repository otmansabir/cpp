/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:49:53 by osabir            #+#    #+#             */
/*   Updated: 2023/09/12 15:57:41 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "---------------------" << std::endl;
	
	std::cout <<  &str << std::endl;
	std::cout <<  stringPTR << std::endl;
	std::cout <<  &stringREF << std::endl;

	std::cout << "---------------------" << std::endl;

	std::cout <<  str << std::endl;
	std::cout <<  *stringPTR << std::endl;
	std::cout <<  stringREF << std::endl;
	
	
	return 0;
	
}