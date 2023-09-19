/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:51:29 by osabir            #+#    #+#             */
/*   Updated: 2023/09/15 17:39:28 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "repl.hpp"

void	replaceInFile(std::string filename, std::string s1, std::string s2)
{
	if (filename.empty() || s1.empty() || s2.empty())
		return ;
	std::ifstream openToReadFile(filename);
	if (!openToReadFile)
	{
		std::cerr << "Failed to open file." << std::endl;
		return ;
	}
	std::string readLine;
	std::string writeLine;
	while (std::getline(openToReadFile, readLine))
	{
		writeLine.append(readLine);
		writeLine.append("\n");
	}
    size_t pos = 0;
	while (true)
	{
        pos = writeLine.find(s1, pos);
		if (pos != std::string::npos)
		{
			writeLine.erase(pos, s1.length());
			writeLine.insert(pos, s2.c_str());
            pos += s2.length();
		}
		else
			break;
		
	}
	std::ofstream openToWriteFile(filename + ".replace");
	if (!openToWriteFile)
	{
		std::cerr << "Failed to open file." << std::endl;
		return ;
	}
	openToWriteFile << writeLine << std::endl;
	
	
	std::cout << "replacement completed." << std::endl;
	
	openToReadFile.close();
	openToWriteFile.close();
	
}
