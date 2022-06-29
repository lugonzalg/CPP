#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;

#include <string>

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const&);
		virtual ~AMateria();

		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter&);
};

#endif
