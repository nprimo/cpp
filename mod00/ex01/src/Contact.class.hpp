/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:48:01 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/16 21:50:35 by nprimo           ###   ########.fr       */
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
		void	set_contact_fields(string field_values[5]);
			// string first_name, 
			// string last_name,
			// string nickname,
			// string phone_number,
			// string darkest_secret);
	private:
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
};

#endif