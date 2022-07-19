/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:29:12 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/19 18:43:23 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern //:  public ShrubberyCreationForm,  public RobotomyRequestForm,  public PresidentialPardonForm
{
	private:

		Form	*create_robotomy(std::string const&);
		Form	*create_shrubbery(std::string const&);
		Form	*create_presidential(std::string const&);

		typedef	Form *(Intern::*formPtr)(std::string const&);
		typedef struct	s_form
		{
			std::string name;
			formPtr		ptr;

		}	t_form;

		t_form	formList[3];

	public:

		Intern();
		Intern(Intern const&);
		~Intern();

		Intern&	operator= (Intern const&);

		Form	*makeForm(std::string const&, std::string const&);

	class	NotFormMatch : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

};

std::ostream&	operator<< (std::ostream&, Intern::NotFormMatch const&);

#endif
