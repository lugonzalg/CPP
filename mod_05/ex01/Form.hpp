/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:45 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 18:38:12 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Bureaucrat;

class Form
{
	private:

		std::string const 	_name;
		bool				_state;
		int const			_gradeSign;
		int const			_gradeExec;

	public:

		Form();
		Form(std::string const&, int, int);
		~Form();

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

	void	sign();

	std::string const&	getName() const;
	bool 				getState() const;
	int					getGradeSign() const;
	int 				getGradeExec() const;

	void				beSigned(Bureaucrat&);
};

std::ostream&	operator<< (std::ostream&, Form::GradeTooHighException&);
std::ostream&	operator<< (std::ostream&, Form::GradeTooLowException&);

#endif
