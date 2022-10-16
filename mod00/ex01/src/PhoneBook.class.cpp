/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:41:26 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/16 21:55:07 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./PhoneBook.class.hpp"

using namespace std;

PhoneBook::PhoneBook(void)
{
	cout << "Created phone book" << endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	cout << "Delete phone book" << endl;
	return;
}

string get_field_value(string field_name)
{
	string input;

	while (input.empty())
	{
		cout << "Insert " << field_name << ": ";
		getline(cin, input); // how to wait for input?
		if (input.empty())
			cout << field_name << " cannot be empty!" << endl;
	}
	return (input);
}

void PhoneBook::add_contact(void)
{
	static int new_contact_pos;
	string field_values[5];
	string field_names[5] = {
		"first name", "last name", "nickname", "phone number", "darkest secret"};

	for (int i = 0; i < 5; i++) {
		field_values[i] = get_field_value(field_names[i]);
	}
	new_contact_pos %= 8;
	this->phone_book[new_contact_pos++].set_contact_fields(field_values);
	cout << "Added new contact!" << endl;
	return;
}