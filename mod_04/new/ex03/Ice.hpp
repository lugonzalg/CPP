#ifndef ICE_HPP
#define ICE_HPP

#include <string>

class Ice
{
	protected:
		std::string	_type;

	public:
		Ice();
		Ice(std::string const&);
		Ice(Ice const&);
		~Ice();

		std::string const& getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter&);
};

#endif
