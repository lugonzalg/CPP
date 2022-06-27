#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character
{
	private:
		static std::size_t	_size = 4;

		AMateria*	_inventory[4];
		std::size_t	_emptyPos;

	public:
		Character();
		Character(Character const&);
		~Character() {}

		virtual std::string const & getName() const;
		virtual void equip(AMateria*);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character&	operator= (Character const&);

		/*GETTERS*/
		std::size_t	getEmptyPos();
};

#endif
