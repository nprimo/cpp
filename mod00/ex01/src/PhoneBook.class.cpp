/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:41:26 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/21 15:18:28 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <sstream>
#include "./PhoneBook.class.hpp"


PhoneBook::PhoneBook(void)
{
	std::cout << "Created phone book" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Delete phone book" << std::endl;
	return;
}

int	PhoneBook::size(void) {
	int	size = -1;

	while (this->phone_book[size + 1].is_set()) {
		size++;
	}
	return (size);
}

std::string get_field_value(std::string field_name)
{
	std::string input = "";

	while (input.empty())
	{
		std::cout << "Insert " << field_name << ": ";
		std::getline(std::cin, input); // how to wait for input?
		if (input.empty())
			std::cout << field_name << " cannot be empty!" << std::endl;
	}
	return (input);
}

void PhoneBook::add_contact(void)
{
	static int new_contact_pos;
	std::string field_values[5];
	std::string field_names[5] = {
		"first name", "last name", "nickname", "phone number", "darkest secret"};

	for (int i = 0; i < 5; i++) {
		field_values[i] = get_field_value(field_names[i]);
	}
	new_contact_pos %= 8;
	this->phone_book[new_contact_pos++].set_contact_fields(field_values);
	std::cout << "Added new contact!" << std::endl;
	return;
}

void PhoneBook::search_contact(void) {
	std::string	header[4] = {
		"INDEX", "FIRST NAME", "LAST NAME", "NICKNAME"
	};
	
	if (this->size() < 0) {
		std::cout << "No contacts saved" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		std::cout << std::right << std::setw(10) << header[i] << "|";
	}
	std::cout << std::endl;
	for (int i = 0; i < 8; i++) {
		if (this->phone_book[i].is_set()) {
			this->phone_book[i].display_contact_short(i);
		}
	}
	std::string			pos_input = "";
	int					pos = 9;
	
	while (pos_input.size() != 1 || std::isdigit(pos_input[0]) == 0 || pos > this->size()) {
		pos_input = get_field_value("contact postion");
		pos = pos_input[0] - '0';
	}
	this->phone_book[pos].display_contact_full();
}