#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat&	operator= (WrongCat const&);

		void	makeSound() const;

		WrongCat();
		WrongCat(std::string);
		WrongCat(WrongCat const&);
		~WrongCat();
};
#endif 
