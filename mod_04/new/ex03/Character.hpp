#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		static const std::size_t	_size = 4;

		AMateria*	_inventory[4];
		std::size_t	_emptyPos;
		std::string	_name;

	public:
		Character();
		Character(std::string const&);
		Character(Character const&);
		~Character();

		void	init();
		std::string const & getName() const;
		void equip(AMateria*);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character&	operator= (Character const&);

		/*GETTERS*/
		std::size_t		getEmptyPos() const;
		bool	getMateria(int, std::string const&) const;
};

#endif
