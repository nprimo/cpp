/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:48:01 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 13:07:30 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>


class Contact {
	public:
		Contact(void);
		~Contact(void);
		bool	is_set(void);
		void	set_contact_fields(std::string field_values[5]);
		void	display_contact_short(int index);
		void	display_contact_full(void);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif