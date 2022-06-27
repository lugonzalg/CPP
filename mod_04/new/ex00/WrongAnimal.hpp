#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	private:

	protected:
		std::string _type;
	public:
		std::string const&	getType() const;
		void	makeSound() const;

		WrongAnimal&	operator= (WrongAnimal const&);

		WrongAnimal();
		WrongAnimal(std::string const&);
		WrongAnimal(WrongAnimal const&);
		~WrongAnimal();
};
#endif 
