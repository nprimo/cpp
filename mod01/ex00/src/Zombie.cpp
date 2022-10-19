/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:21:21 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 15:30:39 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.hpp"



Zombie::Zombie(void) {
	std::cout << "Zombie created" << std::endl;
	this->_name = "default";
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << " out" << std::endl;
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
}
