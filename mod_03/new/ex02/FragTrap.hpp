#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		void	_init();
	
	public:
		FragTrap();
		FragTrap(std::string const&);
		FragTrap(FragTrap const&);
		~FragTrap();

		FragTrap&	operator= (FragTrap const&);

		void	highFiveGuys();
};

#endif
