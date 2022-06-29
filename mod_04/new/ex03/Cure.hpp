#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
//#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const&);
		Cure(Cure const&);
		~Cure();

		Cure&	operator= (Cure const&);

		std::string const& getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter&);
};

#endif
