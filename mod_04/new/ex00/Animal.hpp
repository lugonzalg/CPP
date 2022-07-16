#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	private:

	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string const&);
		Animal(Animal const&);
		virtual ~Animal();

		Animal&	operator= (Animal const&);

		std::string const&	getType() const;
		virtual void	makeSound() const;
};
#endif 
