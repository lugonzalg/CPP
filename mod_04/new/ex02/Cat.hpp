#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat();
		Cat(std::string const&);
		Cat(Cat const&);
		~Cat();

		Cat&	operator= (Cat const&);

		void	makeSound() const;
		void	brainAddr() const;
};
#endif 
