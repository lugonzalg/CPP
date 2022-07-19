#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog();
		Dog(std::string const&);
		Dog(Dog const&);
		~Dog();

		Dog&	operator= (Dog const&);

		void	makeSound() const;
		void	brainAddr() const;
};
#endif 
