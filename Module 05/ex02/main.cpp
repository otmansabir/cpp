/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:55:44 by osabir            #+#    #+#             */
/*   Updated: 2024/09/15 09:36:21 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


// int main(void)
// {
//     try
//     {
//         Bureaucrat B("Bure", 110);
//         PresidentialPardonForm P("pres");
//         B.executeForm(P);
//         // P.execute(B);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }
//     return 0;
// }

// int main(void)
// {
//     try
//     {
//         Bureaucrat B("Bure", 2);
//         RobotomyRequestForm P("pres");
//         P.execute(B);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "error " << e.what() << std::endl;
//     }
//     return 0;
// }

int main(void)
{
    try
    {
        Bureaucrat B("Bure", 2);
        ShrubberyCreationForm P("pres");
        P.execute(B);
    }
    catch(const std::exception& e)
    {
        std::cerr << "error " << e.what() << std::endl;
    }
    return 0;
}
