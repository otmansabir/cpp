/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:41:55 by osabir            #+#    #+#             */
/*   Updated: 2023/09/19 10:33:13 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}
bool    notNewlin(const char *str)
{
    int i = 0;
    int j = 0;
    if (str[i] == '\n')
        return true;
    while (str[i])
    {
        if (str[i] != '\n' && str[i] != ' ')
            j++;
        i++;
    }
    if (j > 0)
        return false;
    return true;
}

bool    isNbr(const std::string& str)
{
    for (std::string::const_iterator iter = str.begin(); iter != str.end(); iter++)
    {
        if (*iter < '0' || *iter > '9')
            return false;
    }
    return true;
}

std::string     returnCnotact(std::string str)
{
    std::string know;
    while (true)
    {
        std::cout << str;
        std::getline(std::cin, know);
        if (std::cin.eof())
            exit(1);
        if (notNewlin(know.c_str()))
            continue;
        else 
            break;
    }
    
    return know;
}

std::string		Contact::getFristName()
{
    return (this->FristName);
}

void	Contact::setFristName()
{
    this->FristName = returnCnotact("First Name: ");
}

std::string		Contact::getLastName()
{
    return (this->LastName);
}

void	Contact::setLastName()
{
    this->LastName = returnCnotact("Last Name: ");
}

std::string		Contact::getNickName()
{
    return (this->NickName);
}

void	Contact::setNickName()
{
	this->NickName = returnCnotact("Nickname: ");
}

std::string		Contact::getPhoneNumber()
{
	return (this->PhoneNumber);
}



void	Contact::setPhoneNumber()
{
    std::string number;
    while (true)
    {
        std::cout << "Phone Number: ";
        std::getline(std::cin, number);
        if (std::cin.eof())
            exit(1);
        if (notNewlin(number.c_str()))
            continue;
        if (isNbr(number))
        {
            this->PhoneNumber = number;
            break;
        }
        else
            std::cout << "Invalid input, number only !!\n"; 
    }
}

std::string		Contact::getDarkestSecret()
{
	return (this->DarkestSecret);
}

void	Contact::setDarkestSecret()
{
	this->DarkestSecret = returnCnotact("Darkest Secret: ");
}