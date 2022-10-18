/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:48:52 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 13:09:03 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "./Contact.class.hpp"



Contact::Contact(void) {
	std::cout << "Contact created" << std::endl;
	return;
}

Contact::~Contact(void) {
	std::cout << "Destroy contact" << std::endl;
	return;
}

bool	Contact::is_set(void) {
	if (this->first_name.size() > 0) {
		return (true);
	}
	return (false);
}

void	Contact::set_contact_fields(std::string field_values[5]) {
	
	this->first_name = field_values[0];
	this->last_name = field_values[1];
	this->nickname = field_values[2];
	this->phone_number = field_values[3];
	this->darkest_secret = field_values[4];
	return ;
}

void	Contact::display_contact_short(int index) {
	std::string	to_print[4] = {
		std::to_string(index), this->first_name, this->last_name, this->nickname
	};
	for (int i = 0; i < 4; i++) {
		if (to_print[i].size() > 10) {
			to_print[i].resize(9);
			to_print[i].resize(10, '.');
		}
		std::cout << std::right << std::setw(10) << to_print[i] << "|";
	}
	std::cout << std::endl;
}

void	Contact::display_contact_full(void) {
	std::string	del = "-";

	del.resize(44, '-');
	std::cout << del << std::endl;
	std::cout << "FIRST NAME: " << this->first_name << std::endl;
	std::cout << "LAST NAME: " << this->last_name << std::endl;
	std::cout << "NICKNAME: " << this->nickname << std::endl;
	std::cout << "PHONE NUMBER: " << this->phone_number << std::endl;
	std::cout << "DARKEST SECRET: " << this->darkest_secret << std::endl;
	std::cout << del << std::endl;
}