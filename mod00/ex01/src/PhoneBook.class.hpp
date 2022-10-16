/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:39:45 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/16 21:43:47 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "./Contact.class.hpp"


class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add_contact (void);
	private:
		Contact	phone_book[8];
};

#endif