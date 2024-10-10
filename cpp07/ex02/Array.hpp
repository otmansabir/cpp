/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:23:41 by osabir            #+#    #+#             */
/*   Updated: 2024/10/10 11:35:07 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class Array
{
    private:
        unsigned int length;
        T *Olde;
        
    public:
        Array();
        Array(unsigned int n);
        Array &operator=(Array const &A);
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
        Array(Array const &O);
        ~Array();
        unsigned int size() const;
        class thowing : public std::exception
        {
            private:
                const char *msg;
                thowing();
            public:
               thowing(const char *MSG) : msg(MSG) {};
               virtual const char* what() const throw() { return this->msg; };
        };
};

template <class T>
Array<T>::Array()
{
    this->Olde = new T[0]();
    this->length = 0;
}

template <class T>
Array<T>::Array(unsigned int n)
{
    this->Olde = new T[n]();
    this->length = n;
}

template <class T>
Array<T> &Array<T>::operator=(Array const &A)
{
    if (this != &A)
    {
        delete[] this->Olde;
        this->length = A.length;
        this->Olde = new T[A.length]();
        for (size_t i = 0; i < A.length; i++)
            this->Olde[i] = A.Olde[i];
    }
    return *this;
}

template <class T>
Array<T>::Array(Array const &O)
{
    this->Olde = new T[O.length]();
    *this = O;
}

template <class T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= this->length)
        throw Array<T>::thowing("Index out of range");
    return Olde[index];
}

template <class T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->length)
        throw Array<T>::thowing("Index out of range");
    return Olde[index];
}

template <class T>
Array<T>::~Array()
{
    delete [] this->Olde;
}

template <class T>
unsigned int Array<T>::size() const
{
    return this->length;
}
#endif