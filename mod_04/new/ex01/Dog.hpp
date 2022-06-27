#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog&	operator= (Dog const&);

		void	makeSound() const;

		Dog();
		Dog(std::string const&);
		Dog(Dog const&);
		~Dog();
};
#endif 
