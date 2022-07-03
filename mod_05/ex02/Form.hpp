/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:45 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 20:25:26 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class	Bureaucrat;

class Form
{
	private:

		std::string const 	_name;
		std::string 		_target;
		bool				_state;
		int const			_gradeSign;
		int const			_gradeExec;

	public:

		Form();
		Form(std::string const&, int, int);
		~Form();

		void			sign();
		void			execute(Bureaucrat const&);
		virtual	void	action(Form const&);
		void			beSigned(Bureaucrat const&);

		std::string const&	getName() const;
		bool 				getState() const;
		int					getGradeSign() const;
		int 				getGradeExec() const;

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

	class FormFalseStatus : public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};

};

std::ostream&	operator<< (std::ostream&, Form::GradeTooHighException const&);
std::ostream&	operator<< (std::ostream&, Form::GradeTooLowException const&);
std::ostream&	operator<< (std::ostream&, Form::FormFalseStatus const&);

#endif
