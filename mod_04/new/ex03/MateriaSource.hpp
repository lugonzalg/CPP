#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#include <string>

class MateriaSource : public IMateriaSource
{
	private:
		std::size_t	_emptyPos;
		AMateria	*_inventory[4];

		void	init();

	public:

		MateriaSource();
		//MateriaSource(std::string const&);
		MateriaSource(MateriaSource const&);
		 ~MateriaSource();

		 void learnMateria(AMateria*);
		 AMateria* createMateria(std::string const&);

		 MateriaSource&	operator= (MateriaSource const&);
		 bool	getMateria(int, std::string const&) const;
};

#endif
