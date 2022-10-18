/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:21:21 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 12:32:18 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.hpp"

using namespace std;

Zombie::Zombie(void) {
	cout << "Zombie created" << endl;
	return ;
}

Zombie::~Zombie(void) {
	cout << "Zombie out" << endl;
	return ;
}

void	Zombie::announce(void) {
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}
