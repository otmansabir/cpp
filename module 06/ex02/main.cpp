/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:16:33 by osabir            #+#    #+#             */
/*   Updated: 2024/10/02 13:24:25 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
	srand(time(NULL));
    switch(rand() % 3)
	{
        case 0:
			return new A;
        case 1:
			return new B;
        case 2:
			return new C;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& aRef = dynamic_cast<A&>(p);
		(void)aRef;
        std::cout << "A" << std::endl;
		return ;
	}
	catch (...)
	{
		try
		{
    		B& bRef = dynamic_cast<B&>(p);
			(void)bRef;
    	    std::cout << "B" << std::endl;
			return ;
		}
		catch (...)
		{
			try
			{
    			C& cRef = dynamic_cast <C&> (p);
				(void)cRef;
    			std::cout << "C" << std::endl;
				return ;
			}
			catch (...)
			{
				std::cerr << "Unknown" << std::endl;
			}
		}
	}		
}

int main(void)
{
	// Base *A = generate();
	// Base *B = generate();
	Base *C = generate();
	Base *D = generate();
	
	// identify(A);
	// identify(B);
	identify(*C);
	identify(*D);
	
	// delete A;
	// delete B;
	delete C;
	delete D;
}