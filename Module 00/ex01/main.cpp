/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:56:34 by osabir            #+#    #+#             */
/*   Updated: 2023/09/18 21:03:23 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	command()
{
	std::cout << "Welcome to the PhoneBook where you can add contacts with a limit of 8 contacts only.\n";
	std::cout << "Here are the available commands:\n";
	std::cout << "ADD: Save a new contact\n";
	std::cout << "SEARCH: Display a specific contact\n";
	std::cout << "EXIT: Quit the program (contacts will be lost forever!)\n";

}

int     main(int ac, char  **av)
{
	PhoneBook Book;
	(void)ac;
	(void)av;
    command();
    std::string input;
    while (true)
    {
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin , input);
		if (std::cin.eof())
			break ;
        if (input == "ADD") 
			Book.setContcts();
        else if (input == "SEARCH")
			Book.searchContact();
        else if (input == "EXIT")
			break ;
        else
            std::cout << "command not found !\n";
    }
    return 0;
}