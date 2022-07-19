/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:25:40 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/19 18:52:13 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private:

	public:
		PresidentialPardonForm(std::string const&);
		~PresidentialPardonForm();

		virtual void action() const;
};
