/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:37:47 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/21 15:18:23 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./PhoneBook.class.hpp"



int main(void)
{
	bool		listening (true);
	PhoneBook	phone_book;

	while (listening)
	{
		std::cout << "--- Waiting for command:\n";
		std::string cmd;
		std::getline(std::cin, cmd);
		if (cmd == "ADD") {
			phone_book.add_contact();
		} else if (cmd == "SEARCH") {
			phone_book.search_contact();
		} else if (cmd == "EXIT") {
			std::cout << "--- Bye bye" << std::endl;
			listening = false;
		} else {
			std::cout << "--- Use a command between: ADD, SEARCH and EXIT" << std::endl;
		}
	}
	return (0);
}