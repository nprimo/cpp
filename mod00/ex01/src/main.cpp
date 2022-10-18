/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:37:47 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 13:08:24 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./PhoneBook.class.hpp"



int main(int ac, char **av)
{
	bool		listening (true);
	PhoneBook	phone_book;

	while (listening)
	{
		std::cout << "--- Waiting for command:\n";
		std::string cmd;
		std::cin >> cmd;
		if (cmd == "ADD") {
			// std::cout << "Add contact" << std::endl;
			phone_book.add_contact();
		} else if (cmd == "SEARCH") {
			phone_book.search_contact();
			// std::cout << "Search contacts" << std::endl;
		} else if (cmd == "EXIT") {
			std::cout << "--- Bye bye" << std::endl;
			listening = false;
		} else {
			std::cout << "--- Use a command between: ADD, SEARCH and EXIT" << std::endl;
		}
	}
	return (0);
}