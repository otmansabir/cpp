/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:17:50 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:04:30 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
# define MATERIASOURCE

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *Materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &a);
        MateriaSource &operator=(const MateriaSource &a);
        ~MateriaSource();
        void learnMateria(AMateria* a);
        AMateria* createMateria(std::string const & type);
};

#endif