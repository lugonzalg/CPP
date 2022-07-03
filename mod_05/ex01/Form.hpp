/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:45 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/02 20:20:59 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Bureaucrat;

class Form
{
	private:

		std::string const 	_name;
		std::string const	_error;
		bool				_state;
		int const			_gradeSign;
		int const			_gradeExec;

	public:

		Form();
		Form(std::string, int, int);
		~Form();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char*	what() const throw();
		private:
			std::string	_error;
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char*	what() const throw();
		private:
			std::string	_error;
	};

	std::string const&	getName() const;
	bool 				getState() const;
	int					getGradeSign() const;
	int 				getGradeExec() const;

	void				beSigned(Bureaucrat&);
};
