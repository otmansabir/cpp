/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:34:11 by osabir            #+#    #+#             */
/*   Updated: 2024/12/28 09:48:32 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <ctime>
# include <string>
# include <vector>
# include <deque>
# include <cstdlib>
# include <ctime>
# include <climits>

class PmergeMe
{
    private:
        std::vector<long>                    Push_Swap;
        std::vector<long>                    Main;
        std::vector<long>                    Pend;
        std::vector<long>                    jacobsthalVEctor;
        std::vector<std::pair<long, long> >  Sorts;
        long                                lastOneV;
        bool                                lastVector;

        
        std::deque<long>                    dPush_Swap;
        std::deque<long>                    dMain;
        std::deque<long>                    dPend;
        std::deque<long>                    jacobsthalDeque;
        std::deque<std::pair<long, long> >  dSorts;
        long                                lastOneD;
        bool                                lastDeque;
        
    public:
        PmergeMe();
        PmergeMe(PmergeMe const &M);
        PmergeMe &operator=(PmergeMe const &M);
        ~PmergeMe();
        
        void ParsingForVector(const std::string input);
        void possibilityToSortVector();
        void possibilityToSortDeque();
        void ParsingForDeque(const std::string input);
        void VectorSort();    
        void DequeSort();
        long atolong(const std::string &str);
        size_t GetVectorSize();
        size_t GetDequeSize();
        void beforeSorting();
        void afterSorting();
        size_t jacobsthalSequence(size_t n);
        class thowing : public std::exception
        {
            public:
                const char* what () const throw ();
        };
          
};

#endif