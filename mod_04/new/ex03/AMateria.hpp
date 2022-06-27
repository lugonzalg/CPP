#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const&);

		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter&);
}

#endif
