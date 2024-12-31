/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:35:00 by osabir            #+#    #+#             */
/*   Updated: 2024/12/28 13:03:38 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &M)
{
    *this = M;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &M)
{
    (void)M;
    return *this;
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::ParsingForVector(const std::string input)
{
    Push_Swap.push_back(atolong(input));
}
void PmergeMe::possibilityToSortVector()
{
    if (Push_Swap.size() == 1)
        Main.push_back(Push_Swap[0]);
    else
        VectorSort();
}
void PmergeMe::possibilityToSortDeque()
{
    if (dPush_Swap.size() == 1)
        dMain.push_back(dPush_Swap[0]);
    else
        DequeSort();
}
void PmergeMe::ParsingForDeque(const std::string input)
{
    dPush_Swap.push_back(atolong(input));
}

long PmergeMe::atolong(const std::string &str)
{
    size_t i = 0;
    bool entre = 0;
    if (str.length() == 0)
        throw (PmergeMe::thowing());
    long number = 0;
    while (std::isdigit(str[i]))
    {
        number = number * 10 + (str[i] - '0');
        if (number > INT_MAX || number < 0)
            throw (PmergeMe::thowing());
        i++;
        entre = 1;
    }
    if ((str[i] && !entre) || (str[i] && !std::isdigit(str[i])))
        throw (PmergeMe::thowing());
    return number;
}

size_t PmergeMe::GetVectorSize()
{
    return this->Push_Swap.size();
}

size_t PmergeMe::GetDequeSize()
{
    return this->dPush_Swap.size();
}

void PmergeMe::beforeSorting()
{
    std::cout << "Before: ";
    for (size_t i = 0; i < this->Push_Swap.size(); i++)
        std::cout << this->Push_Swap[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::afterSorting()
{
    std::cout << "After: ";
    for (size_t i = 0; i < this->Main.size(); i++)
        std::cout << this->Main[i] << " ";
    std::cout << std::endl;
        
}

size_t PmergeMe::jacobsthalSequence(size_t n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return jacobsthalSequence(n - 1) + 2 * jacobsthalSequence(n - 2);
}

void mergeSortPairs(std::vector<std::pair<long, long> >& arr, size_t left, size_t right)
{
    if (left + 1 >= right)
        return;
    
    size_t mid = (left + right) / 2;
    mergeSortPairs(arr, left, mid);
    mergeSortPairs(arr, mid, right);
    
    std::vector<std::pair<long, long> > temp(right - left);
    size_t i = left, j = mid, k = 0;
    
    while (i < mid && j < right)
    {
        if (arr[i].first <= arr[j].first)
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    
    while (i < mid)
        temp[k++] = arr[i++];
    while (j < right)
        temp[k++] = arr[j++];
    
    for (size_t i = 0; i < k; ++i)
        arr[left + i] = temp[i];
}

void mergeSortPairsDeque(std::deque<std::pair<long, long> >& arr, size_t left, size_t right)
{
    if (left + 1 >= right)
        return;
    
    size_t mid = (left + right) / 2;
    mergeSortPairsDeque(arr, left, mid);
    mergeSortPairsDeque(arr, mid, right);
    
    std::deque<std::pair<long, long> > temp(right - left);
    size_t i = left, j = mid, k = 0;
    
    while (i < mid && j < right)
    {
        if (arr[i].first <= arr[j].first)
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    
    while (i < mid)
        temp[k++] = arr[i++];
    while (j < right)
        temp[k++] = arr[j++];
    
    for (size_t i = 0; i < k; ++i)
        arr[left + i] = temp[i];
}

void PmergeMe::VectorSort()
{
    size_t size = Push_Swap.size();
    
    lastVector = 0;
    for (size_t i = 0; i < size; i += 2)
    {
        long a = Push_Swap[i];
        if (i + 1 == size)
        {
            lastOneV = a;
            lastVector = 1;
            break;
        }           
        long b = Push_Swap[i + 1];
        if (a < b)
            std::swap(a, b);
        Sorts.push_back(std::make_pair(a, b));
    }
    
    size = Sorts.size();
    
    mergeSortPairs(Sorts, 0, size);

    if (Sorts.size() > 0)
    {
        Main.push_back(Sorts[0].second);
        Main.push_back(Sorts[0].first);
        for (size_t i = 1; i < size; i++)
        {
            Main.push_back(Sorts[i].first);
            Pend.push_back(Sorts[i].second);
        }
    }

    if (Pend.size() > 0)
    {
        size_t prev = 0;
        size_t curr = 0;
        size_t push = 1;
        size_t sequence = 3;
        size_t PendSize = Pend.size();
        while (1)
        {
            size_t jacob = jacobsthalSequence(sequence++);
            if (jacob >= PendSize )
            {
                jacobsthalVEctor.push_back(PendSize);
                break ;
            }
            jacobsthalVEctor.push_back(jacob);
        }
        
        sequence = 0;

        while (sequence < jacobsthalVEctor.size())
        {
            size_t next = jacobsthalVEctor[sequence];
            prev = curr;
            curr = next;
            for (int i = int(curr) - 1; i >= int(prev); i--)
            { 
                std::vector<long>::iterator pos = std::lower_bound(Main.begin(),(Main.begin() + curr + push), Pend[i]);
                Main.insert(pos, Pend[i]);
                push++; 
            }
            sequence++;
        }
    }
    if (lastVector)
    {
        std::vector<long>::iterator pos = std::lower_bound(Main.begin(), Main.end(), lastOneV);
        Main.insert(pos, lastOneV);
    }
}
void PmergeMe::DequeSort()
{

    size_t size = dPush_Swap.size();
    
    lastDeque = 0;
    for (size_t i = 0; i < size; i += 2)
    {
        long a = dPush_Swap[i];
        if (i + 1 == size)
        {
            lastOneD = a;
            lastDeque = 1;
            break;
        }           
        long b = dPush_Swap[i + 1];
        if (a < b)
            std::swap(a, b);
        dSorts.push_back(std::make_pair(a, b));
    }
    
    size = dSorts.size();
    mergeSortPairsDeque(dSorts, 0, size);
    
    if (dSorts.size() > 0)
    {
        dMain.push_back(dSorts[0].second);
        dMain.push_back(dSorts[0].first);
        for (size_t i = 1; i < size; i++) {
            dMain.push_back(dSorts[i].first);
            dPend.push_back(dSorts[i].second);
        }
    }
    
    
        if (Pend.size() > 0)
        {
            size_t prev = 0;
            size_t curr = 0;
            size_t push = 1;
            size_t sequence = 3;
            size_t PendSize = dPend.size();
            while (1)
            {
                size_t jacob = jacobsthalSequence(sequence++);
                if (jacob >= PendSize)
                {
                    jacobsthalDeque.push_back(PendSize);
                    break ;
                }
                jacobsthalDeque.push_back(jacob);
            }
            while (sequence < jacobsthalVEctor.size())
            {
                size_t next = jacobsthalVEctor[sequence];
                prev = curr;
                curr = next;
                for (int i = int(curr) - 1; i >= int(prev); i--)
                { 
                    std::deque<long>::iterator pos = std::lower_bound(dMain.begin(),(dMain.begin() + curr + push), dPend[i]);
                    dMain.insert(pos, dPend[i]);
                    push++; 
                }
                sequence++;
            }
        }
        if (lastDeque)
        {
            std::deque<long>::iterator pos = std::lower_bound(dMain.begin(), dMain.end(), lastOneD);
            dMain.insert(pos, lastOneD);
        }
}


const char *PmergeMe::thowing::what() const throw()
{
    return "Error";
}
