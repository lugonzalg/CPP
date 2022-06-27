#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string const&);
		ScavTrap(ScavTrap const&);
		~ScavTrap();

		ScavTrap&	operator= (ScavTrap const&);

		void	guardGate();
};

#endif
