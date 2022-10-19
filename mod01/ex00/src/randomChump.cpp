/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:36:41 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 11:59:09 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.hpp"

Zombie*	newZombie(std::string name);

void	randomChump(std::string name) {
	Zombie* zombie;

	zombie = newZombie(name);
	zombie->announce();
	delete(zombie);
}
