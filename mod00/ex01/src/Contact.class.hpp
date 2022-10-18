/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:48:01 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 11:48:59 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
using namespace std;

class Contact {
	public:
		Contact(void);
		~Contact(void);
		bool	is_set(void);
		void	set_contact_fields(string field_values[5]);
		void	display_contact_short(int index);
		void	display_contact_full(void);
	private:
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
};

#endif