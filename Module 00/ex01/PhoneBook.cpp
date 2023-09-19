#include "PhoneBook.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:55:27 by osabir            #+#    #+#             */
/*   Updated: 2023/09/05 12:55:28 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::setContcts()
{
    this->Contacts[index].setFristName();
    this->Contacts[index].setLastName();
    this->Contacts[index].setNickName();
    this->Contacts[index].setPhoneNumber();
    this->Contacts[index].setDarkestSecret();
    if (index == 7)
        index = 0;
    else
        index++;
}

std::string		lineString(const std::string& str)
{
	if (str.empty())
		return ("          ");
	else if (str.length() <= 10)
		return str;
	else
		return str.substr(0, 9).append(".");
}

void PhoneBook::searchContact()
{
	std::string input;
	int index_call;
    std::string separator = "+----------+----------+----------+----------+\n";
    std::string name = "|  Index   | First    | Last     | Nickname |\n";

    std::cout << separator << name << separator;
	for (int i = 1; i <= 8 && !this->Contacts[i - 1].getFristName().empty(); ++i)
    {
        std::cout  << std::right << "|" << std::setw(10) << i
        << "|" << std::setw(10) << lineString(this->Contacts[i - 1].getFristName())
        << "|" << std::setw(10) << lineString(this->Contacts[i - 1].getLastName())
        << "|" << std::setw(10) << lineString(this->Contacts[i - 1].getNickName())
        << "|" << "\n";
		std::cout << separator;
    }
	while (!this->Contacts[0].getFristName().empty())
	{
		std::cout <<"Enter the index of the contact to display: ";
		std::getline(std::cin, input);
		if (std::cin.eof() == true)
			return ;
		if (!isNbr(input))
		{
			std::cout << "Invalid input, Entre number only\n";
			continue;
		}
		index_call = std::atoi(input.c_str());
		if ((index_call >= 1 && index_call <= 8) && !this->Contacts[index_call - 1].getFristName().empty())
		{
			std::cout <<  "First Name: " << this->Contacts[index_call - 1].getFristName() << "\n"
			<< "Last Name: " << this->Contacts[index_call - 1].getLastName() << "\n"
			<< "Nickname: " << this->Contacts[index_call - 1].getNickName() << "\n"
			<< "Phone Number: " << this->Contacts[index_call - 1].getPhoneNumber() << "\n"
			<< "Darkest Secret: " << this->Contacts[index_call - 1].getDarkestSecret() << "\n";
			break;
		}
		else
			std::cout << "Invalid index. Contact not found.\n";
	}
	


}
