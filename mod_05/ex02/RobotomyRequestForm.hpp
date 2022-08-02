/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:34:03 by lugonzal          #+#    #+#             */
/*   Updated: 2022/08/02 18:41:42 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const&);
		RobotomyRequestForm(std::string const&);
		~RobotomyRequestForm();

		RobotomyRequestForm&	operator= (RobotomyRequestForm const&);

		virtual void	action() const ;
};
