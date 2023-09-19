 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:46:58 by osabir            #+#    #+#             */
/*   Updated: 2023/09/06 13:15:49 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact 	Contacts[8];
		int			index;

    public:
		PhoneBook();
		~PhoneBook();
		void		setContcts();
		void		searchContact();
		
};

  