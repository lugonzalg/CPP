#ifndef ICE_HPP
#define ICE_HPP

#include <string>

class Cure
{
	protected:
		std::string	_type;

	public:
		Cure();
		Cure(std::string const&);
		Cure(Cure const&);
		~Cure();

		std::string const& getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter&);
};

#endif
