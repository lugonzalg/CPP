/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:45 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/02 20:20:59 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Intern
{
	private:

		std::string const 	_name;
		std::bool			_state;
		int const			_gradeSign;
		int const			_gradeExec;

	public:

		Intern();
		Intern(std::string, int, int);
		~Intern();

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

	std::string const&	getName() const;
	std::bool 			getState() const;
	int	const			getGradeSign() const;
	int const			getGradeExec() const;

};
