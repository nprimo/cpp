/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:48:52 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/16 21:51:07 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

void Contact::set_contact_fields(string field_values[5]) {
	
	this->first_name = field_values[0];
	this->last_name = field_values[1];
	this->nickname = field_values[2];
	this->phone_number = field_values[3];
	this->darkest_secret = field_values[4];
	return ;
}