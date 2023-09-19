/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:47:52 by osabir            #+#    #+#             */
/*   Updated: 2023/09/18 20:52:24 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream> 

class Contact
{
	private:
		std::string 	FristName;
		std::string 	LastName;
		std::string		NickName;
		std::string		PhoneNumber;
		std::string		DarkestSecret;
	public:
		Contact();
		~Contact();
		std::string		getFristName();
		void			setFristName();
		std::string		getLastName();
		void			setLastName();
		std::string		getNickName();
		void			setNickName();
		std::string		getPhoneNumber();
		void			setPhoneNumber();
		std::string		getDarkestSecret();
		void			setDarkestSecret();
		
};

bool   	 isNbr(const std::string& str);