/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:28:08 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 11:34:45 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.hpp"

Zombie*	newZombie(std::string name) {
	Zombie* zombie;

	zombie = new(Zombie);
	zombie->set_name(name);
	return zombie;
}
