/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:04:51 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 12:14:30 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

void	testHorde(int N, std::string name) {
	Zombie* horde;
	
	horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete[] horde;
}

int main(void) {
	testHorde(2, "James");
	testHorde(0, "marco");
	testHorde(10, "mario");
}
