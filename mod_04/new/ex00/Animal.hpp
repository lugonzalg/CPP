#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	private:

	protected:
		std::string _type;
	public:
		std::string const&	getType() const;
		virtual void	makeSound() const;

		Animal&	operator= (Animal const&);

		Animal();
		Animal(std::string const&);
		Animal(Animal const&);
		virtual ~Animal();
};
#endif 
