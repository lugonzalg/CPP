/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:25:40 by lugonzal          #+#    #+#             */
/*   Updated: 2022/08/02 18:41:57 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const&);
		PresidentialPardonForm(std::string const&);
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator= (PresidentialPardonForm const&);

		virtual void action() const;
};
