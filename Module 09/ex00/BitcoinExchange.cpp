/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:07:47 by osabir            #+#    #+#             */
/*   Updated: 2024/11/12 11:53:05 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{
}

Bitcoin::Bitcoin(Bitcoin const &B)
{
    *this = B;
}

Bitcoin &Bitcoin::operator=(Bitcoin const &B)
{
    if (this != &B)
    {
        this->Data = B.Data;
        this->TimeZone = B.TimeZone;
        this->Convert = B.Convert;
        this->lower = B.lower;
    }
    return *this;
}

Bitcoin::~Bitcoin()
{
}

void Bitcoin::Exchange(const std::string input)
{
    std::fstream    File(input, std::ios::in);
    std::string     line;
    if (!File.is_open())
    {
        std::cerr << "Faild to open File" << std::endl;
        return ;
    }
    std::getline(File, line);
    if (line != "date | value")
    {
        std::cerr << "Erorr in first line" << std::endl;
        return ;
    }
    while (std::getline(File, line))
    {
        try
        {
            if (line.empty())
                std::cerr << "Error: bad input => Empty Line" << std::endl;
            else
            {
                ParsingInput(line);

                std::map<std::string, double>::iterator it = Data.find(TimeZone.substr(0, 10));
                if (it != Data.end())
                    std::cout << TimeZone << " => " << Convert << " = " << (Convert * it->second) << std::endl;
                else
                {
                    it = Data.lower_bound(TimeZone.substr(0, 10));
                    if (it->first != TimeZone.substr(0, 10) && Data.begin() != it)
                        it--;
                    if (it != Data.end())
                        std::cout << TimeZone << " => " << Convert << " = " << (Convert * it->second) << std::endl;
                } 
            }
        }
        catch (const std::string &e)
        {
            std::cerr << e << std::endl;
        }
        catch (char const * e)
        {
            std::cerr << e << std::endl;
        }
    }
}

void Bitcoin::ReadDataBaseFile()
{
    std::fstream        File("data.csv", std::ios::in);
    std::string         line, read, nbr;
    char *end;
    double price;
    if (!File.is_open())
    {
        std::cerr << "Faild To Open File -> data.csv" << std::endl;
        return ;
    }
    std::getline(File, line);
    if (line != "date,exchange_rate")
    {
        std::cerr << "Erorr In First Line" << std::endl;
        return ;
    }
    while (std::getline(File, line))
    {
        std::stringstream   token(line);
        std::getline(token, read, ',');
        std::getline(token, nbr, ',');
        price = std::strtod(nbr.c_str(), &end);
        Data[read.substr(0, 10)] = price;
    }
}

void Bitcoin::ParsingInput(const std::string input)
{
    std::string first_line, last_line;
    
    size_t pos = input.find("|");
    if (pos == std::string::npos)
       throw( "Error: bad input => " + input);
    first_line = input.substr(0, 10);
    last_line = input.substr(pos + 1);
    ParsingDate(first_line);
    ParsingValue(last_line);
}
bool syn_tax(std::string &input)
{
    if (input[4] != '-' || input[7] != '-')
        return true;
    for (size_t i = 0; i < 4; i++)
    {
        if (std::isdigit(input[i]) == 0)
            return true;
    }
    for (size_t i = 5; i < 7; i++)
    {
        if (std::isdigit(input[i]) == 0)
            return true;
    }
    for (size_t i = 8; i < 10; i++)
    {
        if (std::isdigit(input[i]) == 0)
            return true;
    }
    return false;
}

void Bitcoin::ParsingDate(std::string input)
{
    int year, month, day;
    bool sana_kabisa = 0;
    lower = false;

    if (input.length() < 10 || syn_tax(input))
        throw( "Error: bad input => " + input);
    TimeZone = input;
    year = std::atoi(input.substr(0, 4).c_str());
    month = std::atoi(input.substr(5, 2).c_str());
    day = std::atoi(input.substr(8, 2).c_str());
    sana_kabisa = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (year < 2009)
        lower = true;
    if ((month < 1 || month > 12) || (day < 1 || day > 31))
        throw( "Error: bad input => " + input);
    if (month == 2 && (!sana_kabisa && day > 28))
        throw( "Error: bad input => " + input);
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        throw( "Error: bad input => " + input);
    
}

bool find_percentage(std::string &Value)
{
    bool find_per = false;
    int per = 0;
    for (size_t i = 0; i < Value.size(); i++)
    {
        if (Value[i] == '.')
        {
            find_per = true;
            per++;
            if (i == 0 || i == Value.size() - 1)
                return false;
            else if (!std::isdigit(Value[i - 1]) || !std::isdigit(Value[i + 1]))
                return false;
        }
    }
    if (find_per && per > 1)
        return false;
    return true;
}

int count(std::string const &Value, char c)
{
    int count  = 0;
    for (size_t i = 0; i < Value.size(); i++)
    {
        if (Value[i] == c)
            count++;
    }
    return count;
}

void Bitcoin::ParsingValue(std::string Value)
{
    char *end = NULL;
    if (Value.find_first_not_of("0123456789-+. ") != std::string::npos)
        throw( "Error: bad input => " + Value);
    while (Value.size() > 0 && std::iswspace(Value[0]))
       Value = Value.c_str() + 1;
    if (!find_percentage(Value))
        throw( "Error: bad input => " + Value);
    if (count(Value, '+') > 1 || count(Value, '-') > 1)
        throw( "Error: bad input => " + Value);
    Convert = std::strtod(Value.c_str(), &end);
    if (*end != 0)
        throw( "Error: bad input => " + Value);
    if (Convert < double(0))
        throw( "Error: not a positive number.");
    if (Convert > double(1000))
        throw( "Error: too large a number.");
}
