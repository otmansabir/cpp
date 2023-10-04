/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:57:35 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:30:41 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->Materia[i] = NULL;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &a)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materia[i])
            delete this->Materia[i];
        if (a.Materia[i])
            this->Materia[i] = a.Materia[i]->clone();
        else
           this->Materia[i] = NULL; 
    }
    return *this;
}

MateriaSource::MateriaSource(const MateriaSource &a)
{
    *this = a;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materia[i])
            delete this->Materia[i];
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (type == this->Materia[i]->getType())
            return this->Materia[i]->clone();
    }
    return 0;
}

void MateriaSource::learnMateria(AMateria* a)
{
    for (int i = 0; i < 4; i++)
    {
        if (!Materia[i])
        {
            Materia[i] = a;
            return ;
        } 
    }
    
}
