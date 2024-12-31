/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:12:53 by osabir            #+#    #+#             */
/*   Updated: 2024/12/28 10:49:16 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <map>
# include <cstdlib> 
# include <iomanip>

class BitcoinExchange
{
    private:
        std::map<std::string , double>  Data;
        std::string                     TimeZone;
        double                          Convert;
        bool                            lower;
    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &B);
        BitcoinExchange &operator=(BitcoinExchange const &B);
        ~BitcoinExchange();
   
        void Exchange(const std::string input);
        void ReadDataBaseFile();
        void ParsingInput(const std::string input);
        void ParsingDate(std::string input, const std::string original);
        void ParsingValue(std::string input, const std::string original);
};

#endif