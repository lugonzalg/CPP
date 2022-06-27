#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string const&);
		ScavTrap(ScavTrap const&);
		~ScavTrap();

		ScavTrap&	operator= (ScavTrap const&);

		void	guardGate();
		/*SETTERS*/
		void	setHP_ST();
		void	setDM_ST();
		void	setEN_ST();
};

#endif
