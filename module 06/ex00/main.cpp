/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:07:58 by osabir            #+#    #+#             */
/*   Updated: 2024/10/02 10:27:08 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int ac, char** av)
{
   if (ac != 2) {
      std::cerr << "Error: WRONG NUMBER OF ARGMENT" << std::endl;
      return 1;
   }
   ScalarConverte::convert(av[1]);
}