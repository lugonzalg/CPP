/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:25:40 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/05 21:26:47 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private:

	public:
		PresidentialPardonForm();
		~PresidentialPardonForm(std::string const&);

		virtual void action() const;
};
