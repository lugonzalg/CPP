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
};

std::ostream& operator<< (std::ostream& os, Bureaucrat&);
std::ostream& operator<< (std::ostream& os, Bureaucrat::GradeTooHighException&);
std::ostream& operator<< (std::ostream& os, Bureaucrat::GradeTooLowException&);

#endif
