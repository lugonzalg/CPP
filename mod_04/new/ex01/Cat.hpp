#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		Cat&	operator= (Cat const&);

		void	makeSound() const;

		Cat();
		Cat(std::string const&);
		Cat(Cat const&);
		~Cat();
};
#endif 
