/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:37:47 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/16 20:37:35 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int ac, char **av)
{
	bool listening (true);

	while (listening)
	{
		cout << "Waiting for command:\n";
		string cmd;
		cin >> cmd;
		if (cmd == "ADD") {
			cout << "Add new contact!" << endl;
		} else if (cmd == "SEARCH") {
			cout << "Search contacts" << endl;
		} else if (cmd == "EXIT") {
			cout << "Bye bye" << endl;
			listening = false;
		} else {
			cout << "Use a command between: ADD, SEARCH and EXIT" << endl;
		}
	}
	return (0);
}