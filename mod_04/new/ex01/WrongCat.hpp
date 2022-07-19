#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(std::string);
		WrongCat(WrongCat const&);
		~WrongCat();

		WrongCat&	operator= (WrongCat const&);

		void	makeSound() const;
};
#endif 
