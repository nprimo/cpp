/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:48:52 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 11:51:57 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "./Contact.class.hpp"

using namespace std;

Contact::Contact(void) {
	cout << "Contact created" << endl;
	return;
}

Contact::~Contact(void) {
	cout << "Destroy contact" << endl;
	return;
}

bool	Contact::is_set(void) {
	if (this->first_name.size() > 0) {
		return (true);
	}
	return (false);
}

void	Contact::set_contact_fields(string field_values[5]) {
	
	this->first_name = field_values[0];
	this->last_name = field_values[1];
	this->nickname = field_values[2];
	this->phone_number = field_values[3];
	this->darkest_secret = field_values[4];
	return ;
}

void	Contact::display_contact_short(int index) {
	string	to_print[4] = {
		to_string(index), this->first_name, this->last_name, this->nickname
	};
	for (int i = 0; i < 4; i++) {
		if (to_print[i].size() > 10) {
			to_print[i].resize(9);
			to_print[i].resize(10, '.');
		}
		cout << right << setw(10) << to_print[i] << "|";
	}
	cout << endl;
}

void	Contact::display_contact_full(void) {
	string	del = "-";

	del.resize(44, '-');
	cout << del << endl;
	cout << "FIRST NAME: " << this->first_name << endl;
	cout << "LAST NAME: " << this->last_name << endl;
	cout << "NICKNAME: " << this->nickname << endl;
	cout << "PHONE NUMBER: " << this->phone_number << endl;
	cout << "DARKEST SECRET: " << this->darkest_secret << endl;
	cout << del << endl;
}