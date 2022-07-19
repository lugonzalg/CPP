#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	private:

	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string const&);
		WrongAnimal(WrongAnimal const&);
		~WrongAnimal();

		WrongAnimal&	operator= (WrongAnimal const&);

		std::string const&	getType() const;
		void	makeSound() const;
};
#endif 
