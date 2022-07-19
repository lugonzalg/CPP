#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string const&);
		Animal(Animal const&);
		virtual ~Animal();

		Animal&	operator= (Animal const&);

		std::string const&	getType() const;
		virtual void	makeSound() const = 0;
};
#endif 
