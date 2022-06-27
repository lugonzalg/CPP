#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public FragTrap,  public ScavTrap
{
	private:
		void	_init();

		std::string	_name;

	public:
		DiamondTrap();
		DiamondTrap(std::string const&);
		DiamondTrap(DiamondTrap const&);
		~DiamondTrap();

		DiamondTrap&	operator= (DiamondTrap const&);
		void	whoAmI();
		void	stats();
};

#endif
