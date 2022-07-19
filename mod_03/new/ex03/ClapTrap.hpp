
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energy;
		unsigned int	_damage;

	public:

		ClapTrap();
		ClapTrap(std::string const&);
		ClapTrap(ClapTrap const&);
		~ClapTrap();

		ClapTrap&	operator= (ClapTrap const&);

		void	attack(std::string const& );
		void	takeDamage(unsigned int );
		void	beRepaired(unsigned int );

		std::string const&	getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergy() const;
		unsigned int	getDamage() const;

		void	setName(std::string const&);
		void	setHitPoints(unsigned int);
		void	setEnergy(unsigned int);
		void	setDamage(unsigned int);
};

std::ostream&	operator<< (std::ostream& os, ClapTrap const& src);

#endif 
