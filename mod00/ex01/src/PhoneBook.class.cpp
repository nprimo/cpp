/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:41:26 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 11:58:42 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
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

int	PhoneBook::size(void) {
	int	size = -1;

	while (this->phone_book[size + 1].is_set()) {
		size++;
	}
	return (size);
}

string get_field_value(string field_name)
{
	string input = "";

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

void PhoneBook::search_contact(void) {
	string	header[4] = {
		"INDEX", "FIRST NAME", "LAST NAME", "NICKNAME"
	};
	
	if (this->size() < 0) {
		cout << "No contacts saved" << endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		cout << right << setw(10) << header[i] << "|";
	}
	cout << endl;
	for (int i = 0; i < 8; i++) {
		if (this->phone_book[i].is_set()) {
			this->phone_book[i].display_contact_short(i);
		}
	}
	string				pos_input = "";
	int					pos = 9;
	string::size_type	sz;
	
	while (pos_input.size() != 1 || isdigit(pos_input[0]) == 0 || pos > this->size()) {
		pos_input = get_field_value("contact postion");
		pos = stoi(pos_input, &sz);
	}
	this->phone_book[pos].display_contact_full();
}