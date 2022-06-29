#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"
//#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const&);
		Ice(Ice const&);
		~Ice();

		Ice&	operator= (Ice const&);

		std::string const& getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter&);
};

#endif
