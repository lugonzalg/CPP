/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:34:03 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 20:25:21 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	private:

	public:
		RobotomyRequestForm();
		~RobotomyRequestForm(std::string const&);

		void	execute(Bureaucrat const&);
};
