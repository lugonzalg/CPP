#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

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

	class GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};
};

#endif
