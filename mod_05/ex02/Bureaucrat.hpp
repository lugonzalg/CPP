/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:17:19 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 16:48:49 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include "Form.hpp"

class Bureaucrat
{
	private:
		std::string _name;
		int			_level;

	public:
		std::string const&	getName() const;
		int	getLevel() const;

		Bureaucrat();
		Bureaucrat(int, std::string const&);
		~Bureaucrat();

		void	addLevel();
		void	decrLevel();
		void	signForm(Form&);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};

	class FormStateFalse : public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
};

std::ostream& operator<< (std::ostream&, Bureaucrat&);
std::ostream& operator<< (std::ostream&, Bureaucrat::FormStateFalse&);
std::ostream& operator<< (std::ostream&, Bureaucrat::GradeTooHighException&);
std::ostream& operator<< (std::ostream&, Bureaucrat::GradeTooLowException&);

#endif
