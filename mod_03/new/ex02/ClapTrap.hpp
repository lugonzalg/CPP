
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string	_name;
		unsigned int	_hitPoints;
		unsigned int	_energy;
		unsigned int	_damage;

	public:
		void	attack(std::string const& );
		void	takeDamage(unsigned int );
		void	beRepaired(unsigned int );
		/*GETTERS*/
		std::string&	getName();
		unsigned int	getHitPoints();
		unsigned int	getEnergy();
		unsigned int	getDamage();

		ClapTrap&	operator= (ClapTrap const&);

			    ClapTrap();
			    ClapTrap(std::string const&);
			    ClapTrap(ClapTrap const&);
			    ~ClapTrap();

};
#endif 
