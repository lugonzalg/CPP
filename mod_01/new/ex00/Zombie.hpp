/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:47:12 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/01 18:56:20 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
   private:
        std::string _name;

   public:
        Zombie(std::string);
        ~Zombie(void);

        void   announce();

};

Zombie* newZombie(std::string);
void    randomChump(std::string);

#endif
