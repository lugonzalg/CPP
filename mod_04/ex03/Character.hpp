/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:40:08 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:06 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ICharacter.hpp>
#include <AMateria.hpp>

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria	*_materia[4];
		uint8_t		_materia_size;
	public:
		Character();
		Character(const std::string&) {}
		Character(const Character&) {}
		virtual ~Character() { std::cout << "Character inhereted class destructor called"; }

		void		setMateriaSize(uint8_t);
		uint8_t		getMateriaSize(void) const;
		void		setName(const std::string&);

		virtual std::string const & getName() const;
		virtual void equip(AMateria*);
		virtual void unequip(int);
		virtual void use(int, ICharacter&);

}
