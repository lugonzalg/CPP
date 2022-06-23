#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap
{
	private:
	
	public:
		FragTrap();
		FragTrap(std::string const&);
		FragTrap(FragTrap const&);
		~FragTrap();

		FragTrap	operator(FragTrap const&);

		void	highFiveGuys();
};

#endif
